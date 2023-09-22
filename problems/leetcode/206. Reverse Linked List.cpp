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
    ListNode* lastItem = nullptr;
    ListNode* reverseList(ListNode* head) {
      if(!head) return nullptr;
      
      auto  result = reverseRec(head);
      
      head->next = nullptr;
      
      return lastItem;
    }
  
    ListNode* reverseRec(ListNode* head) {   
        if(!head || !head->next) {
          lastItem = head;
          return head;
        } 
      
        auto result = reverseRec(head->next);
        
        if(result) {
          result->next = head;
        }
      
        
      
        return head;
    }
};


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
    ListNode* reverseList(ListNode* head) {
      if (!head || !head -> next) {
            return head;
        }
        ListNode* node = reverseList(head -> next);
        head -> next -> next = head;
        head -> next = NULL;
        return node;
    }
};

/**  ITERATIVE SOLUTION
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
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode* prev = nullptr;
        ListNode* current = head;

        while (current != nullptr) {
            ListNode* tempNext = current->next;
            current->next = prev;
            prev = current;
            current = tempNext;
        }

        return prev;
    }
};
