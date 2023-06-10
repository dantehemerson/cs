/**
Test Cases:
[4,0,-4,-2,2,5,2,0,-8,-8,-8,-8,-1,7,4,5,5,-4,6,6,-3]

[6,7,-8,5,-1,2,-2,-4,-3,0,4]
[4,0,-3,-4,-2,2,-1,5,-8,7,6]
*/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, bool> hashNums;
        for(int& num: nums) {
            hashNums.emplace(num, true);
        }

        int longestStreak = 0;
        for(auto& hashPair: hashNums) {
            int num = hashPair.first;

            if(hashNums.find(num - 1) ==  hashNums.end()) {
                int i = 0;
                while(hashNums.find(num + i) != hashNums.end()) {
                    i++;
                }

                longestStreak = max(i, longestStreak);
            }
        }

        return longestStreak;
    }
};
