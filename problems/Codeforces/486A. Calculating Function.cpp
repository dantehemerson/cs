#include <iostream>

using namespace std;
/**
* If n is even, the result is n/2, as we se below.
* If n is odd, make the same for (n - 1)(even) and substract n
-1 +2 -3 +4 -5
 \ /   \ /   |
  +1   +1   -5
    \ /      |
 n/2 = 2    -5
      \    /
       [-3]
**/


int main() {
	long long int n;
	cin >> n;
	cout << n / 2 - (n % 2 == 0 ? 0: n) << endl;
	return 0;
}
