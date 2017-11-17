#include <iostream>

using namespace std;

int main() {

	int N;
	int n;
	int cantZ;
	int caseN = 1;

	while(cin >> N, N) {
		cantZ = 0;
		for(int i = 1; i <= N; i++) {
			cin >> n;
			if(!n) cantZ++;
		}

		cout << "Case " << caseN++ << ": " << N - 2*cantZ << endl;
	}

	return 0;
}