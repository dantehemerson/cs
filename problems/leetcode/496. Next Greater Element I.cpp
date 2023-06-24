class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        stack<int> s;
        unordered_map<int, int> gt;

      // Monotonic stack
        for (int i = 0; i < nums2.size(); i++) {
            while (!s.empty() && s.top() < nums2[i]) {
                gt[s.top()] = nums2[i];
                s.pop();
            }

            s.push(nums2[i]);
        }


         // HashMap
        vector<int> result(nums1.size(), -1);
        for (int i = 0; i < nums1.size(); i++)  {
            if(gt.count(nums1[i])) {
                result[i] = gt[nums1[i]];
            }
        }

        return result;
    }
}
