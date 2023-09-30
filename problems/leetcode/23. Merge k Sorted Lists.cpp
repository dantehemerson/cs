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
    // O(k * max(lists[i].size()) )
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* result = new ListNode();
        ListNode* resultIt = result;

        while (true) {
            int minPos = -1;
            for (int i = 0; i < lists.size(); i++) {
                if (lists[i] != nullptr) {
                    if (minPos == -1) minPos = i;
                    else {
                        minPos = lists[minPos]->val <= lists[i]->val ? minPos : i;
                    }
                }
            }

            if (minPos == -1) break; // end of loop, all lists are empty

            resultIt->next = lists[minPos];
            resultIt = resultIt->next;

            lists[minPos] = lists[minPos]->next;
        }

        return result->next;
    }
};
