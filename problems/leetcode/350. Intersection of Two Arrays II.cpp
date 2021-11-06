class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
      map<int, int> existsIn1;
      for(int &num: nums1) {
        existsIn1[num]++;
      }
      
      vector<int> intersection;
      for(int &num: nums2) {
        if(existsIn1[num]) {
          intersection.push_back(num);
          existsIn1[num] -= 1;
        }
      }
      
      return intersection;
    }
};
