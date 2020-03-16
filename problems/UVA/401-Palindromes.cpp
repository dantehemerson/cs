#include <bits/stdc++.h>

using namespace std;

int main(){


	map<char, char> mirror;
	mirror['A'] = 'A';
	mirror['H'] = 'H';
	mirror['I'] = 'I';
	mirror['M'] = 'M';
	mirror['T'] = 'T';
	mirror['U'] = 'U';
	mirror['V'] = 'V';
	mirror['W'] = 'W';
	mirror['X'] = 'X';
	mirror['Y'] = 'Y';
	mirror['1'] = '1';
	mirror['8'] = '8';
	mirror['O'] = 'O';

	mirror['E'] = '3';
	mirror['3'] = 'E';
	mirror['J'] = 'L';
	mirror['L'] = 'J';
	mirror['S'] = '2';
	mirror['2'] = 'S';
	mirror['Z'] = '5';
	mirror['5'] = 'Z';

	

	bool palindrome;
	bool mirrored;

	string cad;
	while(cin >> cad) {
		mirrored = true;
		palindrome = true;

		for(int i = 0; i < (cad.size() + 1)/2; ++i) {            
			if(cad[i] != cad[cad.size() - (1 + i)]) {
				palindrome = false;
			}

			if(cad[i] != mirror[cad[cad.size() - ( 1 + i)]]) {
				mirrored = false;				
			}
		}

		cout << cad;
		if(mirrored && palindrome) {
			cout << " -- is a mirrored palindrome.";
		}
		else if(mirrored) {
			cout << " -- is a mirrored string.";
		}
		else if(palindrome) {
			cout << " -- is a regular palindrome.";
		}
		else {
			cout << " -- is not a palindrome.";
		}
		cout << endl << endl;
	}

	return 0;
}
