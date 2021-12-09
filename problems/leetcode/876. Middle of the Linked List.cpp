/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
 Two Pointers solution
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        int slowC = 0;
        ListNode* fast = head;
        int fastC = 0;
        int mid = 100;
      
        while(slow) {
          if(fast && fast->next) {
            fast = fast->next->next;
            fastC+=2;
          }
          else if(fast) {
            fastC++;
            fast = fast->next;
          }
          
          if(!fast) {
            mid = fastC/2;
          }
          
          if(slowC == mid) {
            return slow;
          }
          
          slow = slow->next;
          slowC++;
        }

        return nullptr;
    }
};



/** Better solution with TP solution  */
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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head, *fast = head; 
      
        while(fast && fast->next) {
          fast = fast->next->next;
          slow = slow->next;
        }
      
        return slow;
    }
};
