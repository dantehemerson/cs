#include <bits/stdc++.h>

using namespace std;

int main() {

	int T;
	int N;

	int high, low, Ni, ant, caseCounter = 1;


	cin >> T;
	while(T--) {
		cin >> N;
		cin >> ant;
		high = low = 0;
		for(int i = 1; i < N; i++) {
			cin >> Ni;
			if(Ni > ant) {
				high++;
			}
			else if(Ni < ant) {
				low++;
			}
			ant = Ni;
		}

		cout << "Case " << caseCounter++ <<": " << high << " " << low << endl;
	}

	return 0;
}