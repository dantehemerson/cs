class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
      int nth = 0;
      int arrIndex = 0;
      int item = 0;
      for(size_t i = 1; i <= 10e6; i++) {
        if(arrIndex >= arr.size() || arr[arrIndex] != i) {
          item = i;
          nth++;
        } else {
          arrIndex++;
        }
        
        if(nth == k) {
          return item;
        }
      }
      
      return 0;
    }
};
