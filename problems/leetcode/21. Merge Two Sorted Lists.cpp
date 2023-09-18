/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

      ListNode* result = nullptr;
      ListNode* first = nullptr;
      // Two pointers
      ListNode* rl1 = l1;
      ListNode* rl2 = l2;

      while(rl1 || rl2) {
        ListNode*& lower = !rl1 ? rl2 : (!rl2 ? rl1 : (rl1->val <= rl2->val ? rl1 : rl2) );

        if(!result) result = first = lower;
        else {
          result->next = lower;
          result = lower;
        }

        lower = lower->next;
      }

      return first;
    }

};


// 2
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) {
            return list2;
        } else if (list2 == nullptr) {
            return list1;
        }

        // Choose first item
        ListNode* head = list1;
        if (list2->val < list1->val) {
            head = list2;
            list2 = list2->next;
        } else {
            list1 = list1->next;
        }

        // We need to return head, so we create an iterator
        ListNode* it = head;

        while (list1 && list2) {
            if (list1->val <= list2->val) {
                it->next = list1;
                list1 = list1->next;
            } else {
                it->next = list2;
                list2 = list2->next;
            }
              it = it->next;
        }

        // If still items in one of the lists
        if (list1) {
            it->next = list1;
        } else if (list2) {
            it->next = list2;
        }

        return head;
    }
};




// Recursive:
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) {
            return list2;
        } else if (list2 == nullptr) {
            return list1;
        } else {
            if (list1->val <= list2->val) {
                list1->next = mergeTwoLists(list1->next, list2);
                return list1;
            } else {
                list2->next = mergeTwoLists(list1, list2->next);
                return list2;
            }
        }
        return nullptr;
    }
};
