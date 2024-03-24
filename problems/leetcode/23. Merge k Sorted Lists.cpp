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




/**
 * Using Merge Sort algorithm.
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return nullptr;

        return mergeK(lists, 0, lists.size() - 1);
    }

    ListNode* mergeK(vector<ListNode*>& lists, int l, int r) {
        if (l >= r) {
            return lists[l];
        }

        int mid = l + (r - l) / 2;
        ListNode* leftList = mergeK(lists, l, mid);
        ListNode* rightList = mergeK(lists, mid + 1, r);

        return merge(leftList, rightList);
    }

    ListNode* merge(ListNode* list1, ListNode* list2) {
        ListNode* result = new ListNode();
        ListNode* it = result;

        while (list1 && list2) {
            if (list1->val < list2->val) {
                it->next = list1;
                list1 = list1->next;
                it = it->next;
            } else {
                it->next = list2;
                list2 = list2->next;
                it = it->next;
            }
        }

        if (list1) {
            it->next = list1;
        } else {
            it->next = list2;
        }


        return result->next;
    }
};
