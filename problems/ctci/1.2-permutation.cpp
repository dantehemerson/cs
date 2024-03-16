#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool checkPermutation(string a, string b) {
  if (a.size() != b.size()) return false;

  unordered_map<char, int> counter;

  for (char &c: a) {
    counter[c]++;
  }

  for (char &c: b) {
    if (counter.count(c) > 0 && counter[c] >= 1) {
      counter[c]--;
    } else {
      return false;
    }

  }

  return true;
}

int main() {
  cout << "abc | cab " <<  checkPermutation("abc", "cab") << endl;
  cout << "abc | aaa " <<  checkPermutation("abc", "aaa") << endl;

  return 0;
}
