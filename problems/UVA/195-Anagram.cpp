#include <bits/stdc++.h>

using namespace std;


bool ordenarCad(string a, string b) {
	for(int i = 0; i < a.size(); i++) {
		if(a[i] == b[i]);
		else if(tolower(a[i]) == tolower(b[i])) {
			return a[i] < b[i];
		}
		else {
			return tolower(a[i]) < tolower(b[i]);
		}
	}
	return true; // Nunca llega acá
}

int main() {
	string cad;
	int T;
	cin >> T;
	while(T--) {
		cin >> cad;
		vector<string> anagramas;		
		sort(cad.begin(), cad.end());
		do {
			anagramas.push_back(cad);
		}while(next_permutation(cad.begin(), cad.end()));

		sort(anagramas.begin(), anagramas.end(), ordenarCad);
		for(int i = 0; i < anagramas.size(); i++) {
			cout << anagramas[i] << endl;
		}
	}

	return 0;
} 