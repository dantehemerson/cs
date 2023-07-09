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
    
    // receive head by reference, so we can modify it in recursive stack
    bool isPalindromeRec(ListNode*& head, ListNode* rightIt) {
        if (rightIt == nullptr) {
            return true;
        }
        
        bool current = isPalindromeRec(head, rightIt->next) && head->val == rightIt->val;
        head = head->next;

        return current;
    }
};

// TODO: Do it with Reverse Second Half In-place next time
https://leetcode.com/problems/palindrome-linked-list/solutions/1137027/js-python-java-c-easy-floyd-s-reversal-solution-w-explanation/
