#include <bits/stdc++.h>

using namespace std;

int main() {

	int A[3], n;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> A[0] >> A[1] >> A[2];
		sort(A, A + 3);
		cout << "Case " << i << ": " << A[1] << endl;
	}

	return 0;
}