#include <bits/stdc++.h>

using namespace std;


int suma(long long int n) {
	int s = 0;
	while(n > 0) {
		s += n % 10;
		n /= 10;
	}
	return s;
}
int f(long long int n) {
	if(n <= 9) {
		return n;
	}
	return f(suma(n));
}

int main() {

	long long int n;
	while(cin >> n, n) {
		cout << f(n) << endl;
	}

	return 0;
}