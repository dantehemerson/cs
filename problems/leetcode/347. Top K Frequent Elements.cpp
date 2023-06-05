class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counter;

        // count frequent elements O(n)
        for(int& num : nums) {
            counter[num] = counter[num] ? counter[num] + 1 : 1;
        }

        // O(n)
        // create vector from a map, to sort 🤨
        vector<pair<int, int>> sorted(counter.begin(), counter.end());

        // O(N logN) -> FINAL COMPLEXITY
        // sort by number of frequest elements
        sort(sorted.begin(), sorted.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });

        // O(N)
        // get the elements
        vector<int> result;
        for(auto& count: sorted) {
            result.push_back(count.first);
        }

        // return first K elements
        return vector<int>(result.begin(), result.begin() + k);
    }
};
