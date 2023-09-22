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
    ListNode* addTwoNumbers(ListNode* it1, ListNode* it2) {
        ListNode* result = new ListNode();
        ListNode* itResult = result;

        int carry = 0;
        while (it1 || it2 || carry) {
            int a = it1 ? it1->val : 0;
            int b = it2 ? it2->val : 0;

            int sum = a + b + carry;

            carry = sum / 10;
            sum %= 10;

            itResult->next = new ListNode(sum);
            itResult = itResult->next;

            if (it1) it1 = it1->next;
            if (it2) it2 = it2->next;
        }

        return result->next;
    }
};
