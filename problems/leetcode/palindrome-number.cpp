#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 ) return false;

        int a = 0;
        vector<int> v;
        int copy = x;
        while(copy > 0) {
            v.push_back(copy % 10);
            copy /= 10;
        }
        cout << copy << endl;
        long mu = pow(10, v.size() - 1);
        long result = 0;
        for(auto it = v.begin(); it != v.end(); it++) {
            result += mu * *it;
            mu /= 10;
        }

        cout << result << endl;
        return result == x;
    }
};

int main() {

  Solution solution = Solution();
  int n;
   cin >> n;
  cout << solution.isPalindrome(n) << endl;

  return 0;
}
