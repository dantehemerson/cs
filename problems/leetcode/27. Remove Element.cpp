class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int valCount = 0;
        for (int i = 0; i < nums.size() - valCount; i++) {
            if (nums[i] == val) {
                valCount++;
                swap(nums[i], nums[nums.size() - valCount]);
                i--; // since we swapped, we need to recheck the current index
            }
        }

        return nums.size() - valCount;
    }
};

// Next time solve it using two pointers.
