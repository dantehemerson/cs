#include <iostream>

using namespace std;

int main() {
	long long int n;
	cin >> n;
	cout << n / 2 - (n % 2 == 0 ? 0: n) << endl;
	return 0;
}
