#include <bits/stdc++.h>

using namespace std;

void changeValue(int a) {
  a = 10;
}

int main() {
  int a = 42;
  cout << "a = " << a << endl;

  changeValue(a);

  cout << "a = " << a << endl;
	return 0;
}
