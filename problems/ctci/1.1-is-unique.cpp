#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool isUnique(string s) {
  unordered_map<char, int>  counter;

  for (char &c : s) {
    if (counter.count(c) > 0) {
      return false;
    }
    counter[c]++;
  }

  return true;
}

int main() {
  cout << "abc: " <<  isUnique("abc") << endl;
  cout << "aba: " << isUnique("aba") << endl;

  return 0;
}
