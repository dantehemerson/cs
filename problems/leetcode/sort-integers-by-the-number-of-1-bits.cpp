// Runtime: 8 ms, faster than 85.38% of C++ online submissions for Sort Integers by The Number of 1 Bits.
// Memory Usage: 10.7 MB, less than 28.59% of C++ online submissions for Sort Integers by The Number of 1 Bits.
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
      vector<pair<int, int>> counter;
      for(int i = 0; i < arr.size(); i++) {
          int ones = 0;
          int item = arr[i];
           while(item) {
              if(item & 1) {
                ones++;
              }

           item >>= 1;
          }
          counter.push_back(make_pair(arr[i], ones));
      }

      sort(counter.begin(), counter.end(), [](auto x, auto y) {
          if(x.second == y.second) {
             return x.first < y.first;
          }
          return x.second < y.second;

      });

    vector<int> result;
      for(auto it = counter.begin(); it != counter.end(); it++) {
        // cout << it->first << " : " << it->second << endl;
        result.push_back(it->first);
      }
      return result;

    }
};


// Solution 2: with cache.
// Runtime: 60 ms, faster than 5.74% of C++ online submissions for Sort Integers by The Number of 1 Bits.
// Memory Usage: 11.6 MB, less than 5.30% of C++ online submissions for Sort Integers by The Number of 1 Bits.
class Solution {
public:
    map<int, int> counter;
    vector<int> sortByBits(vector<int>& arr) {
      sort(arr.begin(), arr.end(), [this](auto x, auto y) {
          int onesX = this->countBits(x);
          int onesY = this->countBits(y);

          if(onesX == onesY) {
             return x < y;
          }
          return onesX < onesY;

      });

      return arr;

    }

    int countBits(int item) {
        if(item == 0) return 0;

        if(!this->counter[item]) {
           int ones = 0;
           while(item) {
              if(item & 1) {
                ones++;
              }

           item >>= 1;
          }
          this->counter[item] = ones;
        }


      return this->counter[item];
    }
};
