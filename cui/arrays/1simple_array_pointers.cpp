#include <iostream>

using namespace std;

int main() {

  size_t total;

  cin >> total;
  int numbers[total];
  int input;
  int *p = &numbers[0];

  for(size_t i = 0; i < total; i++) {
    cin >> input;
    *(p + i) = input;
  }

  for(size_t i = 0; i < total; i++) {
    cout << numbers[i] << endl;
  }

  return 0;
}
