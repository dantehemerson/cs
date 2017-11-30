#include <bits/stdc++.h>

using namespace std;

vector<string> A, B;



/* Rota 90 grados */
void rotar(vector<string>& A, int v = 1) {
	if(!v) {
		return;
	}
	vector<string> T(A.size());
	int c = 0;
	for(int j = 0; j < A.size(); j++) {
		for(int i = A.size() -1; i >= 0; i--) {					
			T[c] += A[i][j];							
		}
		c++;
	}
	for(int i = 0; i < T.size(); i++) {
		A[i] = T[i];		
	}
	rotar(A, v -1);
}

void ref(vector<string>& A) {
	reverse(A.begin(), A.end());
}

bool comparar() {
	for(int i = 0; i < A.size(); i++) {
		if(A[i] != B[i]) {
			return false;
		}
	}
	return true;
}

/* Copia de B -> A */
void copiar(vector<string>& A, vector<string>& B) {
	A.clear();
	for(int i = 0; i < B.size(); i++) {
		A.push_back(B[i]);
	}
}


int main() {	

	string a, b;
	int n;
	int counter = 1;
	while(cin >> n) {
		A.clear(), B.clear();		
		while(n--) {
			cin >> a >> b;
			A.push_back(a), B.push_back(b);
		}
		
		vector<string> O(A);
		bool sucs= false;
		cout << "Pattern " << counter++ << " was ";
		if(comparar()) { // Comparación sin realizar ninguna modificación
			cout << "preserved.";
			sucs = true;
		}
		else {
			for(int i = 1; i <= 3; i++)	 {
				rotar(A);
				if(comparar()) {
					cout << "rotated " << i*90 << " degrees.";
					sucs = true;
				}
			}
		}

		if(!sucs) {
			copiar(A, O);
			ref(A);
			if(comparar()) {
				cout << "reflected vertically.";
				sucs = true;
			}
			else {
				for(int i = 1; i <= 3; i++) {
					rotar(A);
					if(comparar()) {
						cout << "reflected vertically and rotated " << i * 90 << " degrees.";
						sucs = true;
					}
				}
			}

		}

		if(!sucs) {
			cout << "improperly transformed.";
		}
		cout << endl;
		
	}

	return 0;
}