/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
  Two pointers O(N)
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* tempHead = new ListNode(0, head);
        ListNode *slow = tempHead, *fast = head;
      
        // Move fast in front so that the gap between slow and fast becomes n
        for(int i = 0; i < n; i++) fast = fast->next;
       
        // Move fast to the end, maintaining the gap
        while(fast) {
          fast = fast->next;
          slow = slow->next;
        }
      
        // Skip the desired node
        slow->next = slow->next->next; 
      
        return tempHead->next;
    }
};
