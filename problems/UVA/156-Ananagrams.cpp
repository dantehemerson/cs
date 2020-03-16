#include <bits/stdc++.h>

using namespace std;

int main() {

	vector<string> palabras;
	string input;
	while(cin >> input, input != "#") {
		palabras.push_back(input);
	}

	map<string, int> counter;
	// Crea una copia del diccionario para no perderlo
	vector<string> ordenadas(palabras);	
	for(int i = 0; i < ordenadas.size(); i++) {
		// Pasa a minusculas la palabra
		transform(ordenadas[i].begin(), ordenadas[i].end(), ordenadas[i].begin(), ::tolower);
		// Ordena la palabra(ascci)
		sort(ordenadas[i].begin(), ordenadas[i].end());		
		counter[ordenadas[i]]++;
	}	

	map<string, int> salida;
	for(int i = 0; i < ordenadas.size(); ++i) {
		if(counter[ordenadas[i]] <= 1) {
			salida[palabras[i]] = 1;
		}
	}
	for(auto it = salida.begin(); it != salida.end(); it++) {				
		cout << it->first << endl;
	}

	return 0;
}