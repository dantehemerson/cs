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
