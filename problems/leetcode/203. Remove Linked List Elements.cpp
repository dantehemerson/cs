/**
Most optim solution
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 Runtime: 20 ms, faster than 84.73% of C++ online submissions for Remove Linked List Elements.
Memory Usage: 14.8 MB, less than 99.97% of C++ online submissions for Remove Linked List Elements.
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
      if(!head) return nullptr;
      ListNode* prev = head;
      ListNode* it = head->next;
      
      while(it) {
        if(it->val == val) {
          prev->next = it->next;
        } else prev = it;
        it = it->next;
      }
      
      if(head->val == val) head = head->next;
      
      return head;
    }
};


/**
Runtime: 24 ms, faster than 56.37% of C++ online submissions for Remove Linked List Elements.
Memory Usage: 15 MB, less than 79.22% of C++ online submissions for Remove Linked List Elements.
*/
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
      if(!head) return nullptr;
      
      ListNode* prev = head;
      ListNode* it = head;
      
      while(it) {
        if(it->val == val) {
          if(it == head) {
            prev = head = it->next;
          } else {
            prev->next = it->next; 
          }
        } else prev = it;
        it = it->next;
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
 
 Runtime: 20 ms, faster than 84.73% of C++ online submissions for Remove Linked List Elements.
Memory Usage: 15.1 MB, less than 43.45% of C++ online submissions for Remove Linked List Elements.
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
     ListNode* dummy = new ListNode;
        dummy -> next = head;
        ListNode* curr = dummy;
        
        while(curr -> next) {
            if(curr -> next -> val == val) {
                curr -> next = curr -> next -> next;
            } else {
                curr = curr -> next;
            }
        }
        
        return dummy -> next;
    }
};
