class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        for(size_t i = 0; i < nums.size(); i++) {
            if((i % 2 == 0 && nums[i] % 2 == 0) ||  (i % 2 == 1 && nums[i] % 2 == 1)) continue; // item is in the correct position

            int mod = i % 2 == 0 ? 0 : 1;
            for(size_t j = i + 1; j < nums.size(); j++) {
              if(nums[j] % 2 == mod) {
                swap(nums[i], nums[j]);
                break;
              }
            }

        }
        return nums;
    }
};


class Solution {
public:
   // with two pointers approach
  vector<int> sortArrayByParityII(vector<int>& nums) {
    int n = nums.size();
    int i = 0, j = n-1;
    while(i<n) {
      while(i<n && nums[i]%2==0) i+=2;
      if(i==n) break;
      while(j>=0 && nums[j]%2==1) j-=2;
      //swap the outliers
      swap(nums[i], nums[j]);
    }
    return nums;
  }
};
