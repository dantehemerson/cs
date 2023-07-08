// RECURSIVE
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
    bool isPalindrome(ListNode* head) {
        ListNode* rightIt = head;

        return isPalindromeRec(head, rightIt);
    }
    
    bool isPalindromeRec(ListNode*& head, ListNode* rightIt) {
        if (rightIt == nullptr) {
            return true;
        }
        
        int rightVal = rightIt->val;
        bool pal = isPalindromeRec(head, rightIt->next);
        bool current = head->val == rightVal;

        head = head->next;

        return current && pal;
    }
};

// TODO: Do it with Reverse Second Half In-place next time
