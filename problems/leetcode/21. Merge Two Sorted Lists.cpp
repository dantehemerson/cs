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
