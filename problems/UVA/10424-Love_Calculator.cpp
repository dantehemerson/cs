#include <bits/stdc++.h>

using namespace std;

/*
#inlclude iostream
por ahora la concha de su madre pendejo demierda
aora no quiero solo estar contigo pero lo que deseo mas importante entre las cuales no se lo que se llamam antes de las 
cuales no quiero estar contigo pero lo debo mas importante ntre las personas mas importante ante las yo 
*/
int sumaDigitos(int n) {
	int suma = 0;
	while(n) {
		suma += (n % 10);
		n /= 10;
	}
	if(suma >= 10) { // Si todavía contiene mas de dos digitos
		return sumaDigitos(suma);
	}
	else {
		return suma;
	}
}

int main() {

	string name1;
	string name2;
	char c;
	int suma1, suma2;
	while(getline(cin, name1), getline(cin, name2)) {
		suma1 = suma2 = 0;
		for(int i = 0; i < max(name1.size(), name2.size()); ++i) {			
			if(i < name1.size()) {
				c = tolower(name1[i]);
				if(c >= 'a' && c <= 'z') {
					suma1 += int(c) - 96;					
				}
			}
			if(i  < name2.size()) {
				c = tolower(name2[i]);
				if(c >= 'a' && c <= 'z') {
					suma2 += int(c) - 96;						
				}
			}
		}
		int sD1 = sumaDigitos(suma1);
		int sD2 = sumaDigitos(suma2);

		cout << fixed << setprecision(2) << float(min(sD1, sD2)) * 100 / max(sD1, sD2) << " %" << endl;
		
		


	}

	return 0;
}