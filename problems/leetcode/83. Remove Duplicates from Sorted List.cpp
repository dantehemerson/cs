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
    ListNode* deleteDuplicates(ListNode* head) {
      if(!head) return nullptr;
      
      auto prev = head;
      auto it = head->next;
      
      while(it) {
        auto next = it->next;
        if(it->val == prev->val) {
          prev->next = next;
          delete it;
        }
        else prev = it;
      
        it = next;
      }
      
      return head;
    }
};
