// Brute force: TLE
function threeSum(nums: number[]): number[][] {
    const triplets: number[][] = [];
    const duplicates = new Set();

    for(let i = 0; i < nums.length - 2; i++) {
        for(let j = i + 1; j < nums.length - 1; j++) {
            for(let k = j + 1; k < nums.length; k++) {
                if(nums[i] + nums[j] + nums[k] === 0) {
                    const triplet = [nums[i], nums[j], nums[k]].sort();
                    if(!duplicates.has(`${triplet[0]}-${triplet[1]}-${triplet[2]}`)) {
                        triplets.push(triplet);
                        duplicates.add(`${triplet[0]}-${triplet[1]}-${triplet[2]}`);
                    }
                }
            }
        }
    }

    return triplets;
};


// Two pointers
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        for (int a = 0; a < nums.size() - 2; a++) {
            if (a > 0 && nums[a] == nums[a - 1]) continue;

            // Two pointers for item 1 and 2
            int b = a + 1; // Left
            int c = nums.size() - 1; // Right

            while (b < c) {
                int sum = nums[a] + nums[b] + nums[c];
                if (sum == 0) {
                    result.push_back({ nums[a], nums[b], nums[c]});
                    b++;
                    while (nums[b] == nums[b - 1] && b < c) {
                        b++;
                    }
                } else if(sum > 0) {
                    c--;
                } else if (sum < 0) {
                    b++;
                }
            }
        }
        return result;
    }
};
