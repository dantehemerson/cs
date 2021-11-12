/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        set<ListNode*> items;
        
        ListNode* it = head;

        while(it) {
          if(items.count(it) == 1) return true;
          
          items.insert(it);
          it = it->next;
        }
      
        return false;
    }
};
