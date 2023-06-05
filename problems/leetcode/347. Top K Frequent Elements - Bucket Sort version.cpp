class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counter;
        for (int& c: nums) {
            counter[c]++;
        }

        // O(n)
        vector<vector<int>> byCount(nums.size() + 1, vector<int>());
        for (auto& count: counter) {
            byCount[count.second].push_back(count.first);
        }

        // O(n)
        vector<int> result;
        for (int i = nums.size(); i >= 1; i--) {
            for(int& num: byCount[i]) {
                result.push_back(num);

                if(result.size() == k) {
                    return result;
                }
            }
        }

        return result;
    }
};
