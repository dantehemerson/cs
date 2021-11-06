class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, bool> exists;
        for(int &num: nums1) {
          exists[num] = true;
        }
      
        vector<int> intersection;
        for(int &num: nums2) {
          if(exists[num]) {
            intersection.push_back(num);
            exists[num] = false;
          }
        }
        
        return intersection;
    }
};
