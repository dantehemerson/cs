#include <bits/stdc++.h>

using namespace std;

int main() {

	int M, N;
	char c;
	int T;
	cin >> T;
	while(T--) {
		cin >> c >> M >> N;
		switch(c) {
			case 'r':
			case 'Q':
				cout << min(M, N);
				break;
			case 'K':
				cout <<  ((M + 1)/2) * ((N + 1)/2);
				break;
			case 'k':
				cout << ((N + 1)/2) * ((M + 1)/2) + ((M)/2) * ((N)/2);
				break;
		}

		cout << endl;
	}



	return 0;
}