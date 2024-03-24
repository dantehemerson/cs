class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int, bool> existN;
       int l = 0;
       int r = 0;

        int score = 0;
        int maxScore = 0;
        while (r < nums.size()) {
           if (existN[nums[r]] == true) {
               existN[nums[l]] = false;
               score -= nums[l];
               l++;
           } else {
                existN[nums[r]] = true;
                score += nums[r];
                maxScore = max(maxScore, score);
                r++;
           }
       }

       return maxScore;
    }
};
