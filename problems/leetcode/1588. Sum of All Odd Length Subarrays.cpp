class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
       int ans = 0,n=arr.size(),i;
        for(i =0;i<n;i++) {
            int contribution = ceil((i+1)*(n-i)/2.0);
            ans+=(contribution*arr[i]);
        }
        return ans;
     }
};

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
      int sum = 0;
      
      for(int subSize = 1; subSize <= arr.size(); subSize += 2) {
        for(int i = 0; i <= arr.size() - subSize; i++) {
          for(int j = i; j < i + subSize; j++) {
            sum += arr[j];
          }
        }
      }
      
      return sum;
     }
};
