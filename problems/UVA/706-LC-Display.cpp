#include <bits/stdc++.h>

using namespace std;


void imprimir(int n, char c) {
	for(int i = 0; i < n; i++) {
		cout << c;
	}
}

int main() {

	///. = n espacios
	string N[5] {
		" -  .  -  -  .  -  -  -  -  - ",
		"|.| .| .| .||.||. |.  .||.||.|",
		" .  .  -  -  -  -  -  .  -  - ",
		"|.| .||.  .| .| .||.| .||.| .|",
		" -  .  -  -  .  -  -  .  -  - "
	};

	int n;
	string numcad;
	while(cin >> n >> numcad && (n != 0 || numcad != "0")) {
		for(int i = 0; i < 5; ++i) {
			for(int x = 1; x <= (i % 2 ? n : 1); x++) {
				for(int j = 0; j < numcad.size(); ++j) {
					int cant = (numcad[j] - '0') * 3;
					for(int h = cant; h < cant + 3; h++) {
						if(N[i][h] == '-')  {
							imprimir(n, '-');
						}
						else  if(N[i][h] == '.') {
							imprimir(n, ' ');
						}
						else {
							cout << N[i][h];
						}
					}
					if(j != numcad.size() -1) {
                        cout << " ";
					}
				}
				cout << endl;
			}
		}
		cout << endl;
	}


	return 0;
}
