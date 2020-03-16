#include <iostream>

using namespace std;

int main() {

	int T;
	int L, W, H;
	int n = 1;

	cin >> T;
	while(T--) {
		cin >> L >> W >> H;
		cout << "Case " << n++ << ": ";
		if(L <= 20 && W <= 20 && H <= 20) {
			cout << "good";
		}
		else {
			cout << "bad";
		}
		cout << endl;
	}

	return 0;
}