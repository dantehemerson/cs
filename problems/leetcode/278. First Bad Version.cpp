// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1, r = n;
        while(l < r) {
          int m = l + (r - l)/2;
          
          int isBad = isBadVersion(m);
          
          if(isBad) r = m;
          else l = m + 1; 
        }
      
        return l;
    }
};
