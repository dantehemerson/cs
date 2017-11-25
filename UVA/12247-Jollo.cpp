#include <bits/stdc++.h>

using namespace std;

int main() {

	int A[3], B[2];
	int carta3;
	bool cartas[53];

	while(cin >> A[0] >> A[1] >> A[2] >> B[0] >> B[1], A[0]) {
		fill(cartas, cartas + 53, true);		

		carta3 = 53;
		cartas[A[0]] = cartas[A[1]] = cartas[A[2]] = cartas[B[0]] = cartas[B[1]] = false;

		// for(int i = 0; i < 53; i++) {
		// 	cout << i << " " << cartas[i] << endl;
		// }
		sort(A, A + 3), sort(B, B + 2);

		if(B[0] > A[2]) {
			for(int i = 1; i <= 52 && i < carta3; i++) {
				if(cartas[i]) {
					carta3 = i;
				}
			}
		}

		if(B[1] > A[2]) {
			for(int i = A[2] + 1; i <= 52 && i < carta3; i++) {
				if(cartas[i]) carta3 = i;
			}
		}

		if(B[0] > A[1]) {
			for(int i = A[1] + 1; i <= 52 && i < carta3; ++i) {
				if(cartas[i]) {
					carta3 = i;
				}
			}
		}

		cout << (carta3 == 53 ? -1 : carta3) << endl;

	}	

	return 0;
}
