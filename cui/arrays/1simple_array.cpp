#include <iostream>

using namespace std;

int main() {

  size_t len;

  cin >> len;
  int a[len] = {};
  int input;

  for(size_t i = 0; i < len; i++) {
    cin >> input;
    a[i] = input;
  }

  // Show array
  for(size_t i = 0; i < len; i++) {
    cout << "[" << i << "] = " << a[i] << endl;
  }

  return 0;
}
