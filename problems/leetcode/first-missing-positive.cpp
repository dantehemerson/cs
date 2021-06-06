class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // If the number is in the range [1, nums.size()]
        // then move it to the position of (value numer - 1)
        // it is we want something like: [1, 2, 3, x, x];
        // then we will find the first x, We don't care about duplicates, x > nums.size()
        // or non-positive integers
        // O(n)
        for(size_t i = 0; i < nums.size(); i++) {
            if(nums[i] >= 1 && nums[i] < nums.size()) {
                // the number in the position we want, is diferent, so move the correct
                // number to that position
                if(nums[i] != nums[nums[i] - 1]) {
                    swap(nums[i], nums[nums[i] - 1]);
                    i--; // to check the new swapped number in position i
                }
            }
        }


        // Find for the first x(the first number that dont match with their position)
        // O(n)
        for(size_t i = 0; i < nums.size(); i++) {
            if(nums[i] != i + 1) {
                return i + 1;
            }
        }

        // Return the max number that the result can be.
        return nums.size() + 1;
    }
};
