// Two pass
class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> counts(3, 0);

        for (int i = 0; i < nums.size(); i++) {
            counts[nums[i]]++;
        }

        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            if(counts[j] > 0) {
                nums[i] = j;
                counts[j]--;
            } else {
                j++;
                i--; // to retry
            }
        }
    }
}

// One pass
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        int i = 0;
        
        while (i <= r) {
            if (nums[i] == 0) {
                swap(nums[l], nums[i]);
                l++;
            } else if (nums[i] == 2) {
                swap(nums[i], nums[r]);
                r--;
                i--;
            }
            i++;
        }
    }
};
