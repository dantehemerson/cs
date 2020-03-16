#include <bits/stdc++.h>

using namespace std;

int pset[200005];
void initSet(int n) {
	for(int i = 0; i < n; i++) {
		pset[i] = i;
	}
}

int findSet(int i) {
	return (pset[i] == i) ? i : pset[i] = findSet(pset[i]);
}

void unionSet(int i, int j) {
	pset[findSet(i)] = findSet(j);
}

bool isSameSet(int i, int j) {
	return findSet(i) == findSet(j);
}

int main() {

	int T, n, a, b;
	char c;
	string s;

	int successfully;
	int unsuccessfully;

	cin >> T;
	for(int i = 1; i <= T; i++) {
		cin >> n;
		successfully = unsuccessfully = 0;
		initSet(n + 5);
		cin.ignore();
		while(1) {
			if(!getline(cin, s) || s.empty()) break;
			sscanf(s.c_str(), "%c %d %d", &c, &a, &b);

			if(c == 'c') {
				unionSet(a, b);
			}
			else {
				if(isSameSet(a, b)) {
					successfully++;
				}
				else {
					unsuccessfully++;
				}
			}
		}
		if(i!= 1) {
			cout << endl;
		}
		cout << successfully << "," << unsuccessfully << endl;
	}

	return 0;
}