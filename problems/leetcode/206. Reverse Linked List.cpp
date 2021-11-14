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
