/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
 Two pointer implementation
 
fast pointer walk n steps
slow pointer walk 1 steps until we get the correct position.
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* tempHead = new ListNode(0, head);
        ListNode *slow = tempHead, *fast = tempHead;
       
        int fastCounter = 0, slowCounter = 0;
        int total = 1000;
        while(slow->next) {
            // fast walk n steps
            for(int i = 0; i < n && fast->next; i++) {
              fastCounter++;
              fast = fast->next;
            }
            if(!fast->next) total = fastCounter;
          
            if(slowCounter == total - n) {
               slow->next = slow->next->next;
               break;
            }
            
            slow = slow->next;
            slowCounter++;
        }
      
        return tempHead->next;
    }
};
