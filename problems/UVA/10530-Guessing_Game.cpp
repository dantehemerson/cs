#include <bits/stdc++.h>

#define OK   1
#define NONE 0

using namespace std;

int A[11];
int main() {

	int n;
	string a, b;

	fill(A, A + 11, NONE);
	while(cin >> n, n) {
		cin >> a >> b;
		if(a == "too") {
			if(b == "low") {
				fill(A, A + n + 1, OK);
			}
			else {
				fill(A + n, A + 11, OK);
			}
		}
		else {
			if(A[n] == NONE) {
				cout << "Stan may be honest" << endl;
			}
			else  {
				cout << "Stan is dishonest" << endl;
			}

			fill(A, A + 11, NONE);	// Reinicia en 0's



	return 0;
}