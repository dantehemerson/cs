class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> dec;
        for(size_t i = 0; i < nums.size(); i += 2) {
            vector<int> nvector(nums[i], nums[i + 1]);
            dec.insert(dec.end(), nvector.begin(), nvector.end());
        }
        return dec;
    }
};
