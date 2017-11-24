#include <bits/stdc++.h>

using namespace std;


// a + b = x
// a - b = y
// ---------
// 2a = x + y

// a = (x + y)/2

// (x + y)/2 + b = x

// b = x - (x  + y)/2


int main() {

	int n, x, y, a, b;
	cin >> n;
	while(n--) {
		cin >> x >> y;		
		a = (x + y)/2;
		b = max(x, y) - (x + y)/2;

		a = max(a, b);
		b = min(a, b);

		//cout << "a = " << a << "  b = " << b << "  x=" << x << "   y=" << y << endl;
		if(a + b == x && abs(a - b) == y) {
			cout << a << " " << b << endl;
		}
		else {
			cout << "impossible" << endl;
		}

	}



	return 0;
}