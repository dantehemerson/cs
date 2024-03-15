// Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures?


// O(n log n) Using sorting: https://gist.github.com/dantehemerson/a8b595b68bdaad628786a714e4da187b

// Implementation O(n) and space O(1). Assuming only ASCII is supported.
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool isUnique(string s) {
  bitset<256> counter;

  for (char &c: s) {
    if (counter.test(int(c))) {
      return false;
    }
    counter.set(int(c));

    // cout << "char: " << c << " : " << code << " -- " << result << " -- " << bitset<256>(result) << endl;
  }

  return true;
}

int main() {
  cout << "012: " <<  isUnique("012") << endl;
  cout << "abz: " <<  isUnique("abz") << endl;
  cout << "aba: " << isUnique("aba") << endl;

  return 0;
}

