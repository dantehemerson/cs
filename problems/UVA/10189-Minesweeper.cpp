#include <bits/stdc++.h>

using namespace std;

int main() {

	int vals[8][2] = {
		{1, 1},
		{1, -1},
		{1, 0},
		{0, 1},
		{0, -1},
		{-1, 0},
		{-1, 1},
		{-1, -1}
	};

	
	int B[101][101];
	string input;
	int n, m;
	int x, y;
	int counter = 1;
	while(cin >> n >> m, n) {
		vector<string> A;
		for(int i = 0; i < n; i++) {
			cin >> input;
			A.push_back(input);
		}
		memset(B, 0, sizeof B);

		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				if(A[i][j] == '*') {
					for(int v = 0; v < 8; v++) {
						x = i + vals[v][0];
						y = j + vals[v][1];
						if(x >= 0 && x < n && y >= 0 && y < m && B[x][y] != '*') {
							B[x][y]++;
						}
					}
				}
			}
		}
		if(counter >= 2) {
			cout << endl;
		}
		cout << "Field #" << counter++ << ":" << endl;
		for(int j = 0; j < n; j++) {
			for(int i = 0; i < m; i++) {
				if(A[j][i] == '*') {
					cout << "*";
				}
				else {
					cout << B[j][i];
				}
			}
			cout << endl;
		}		
	}


	return 0;
}