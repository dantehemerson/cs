#include <bits/stdc++.h>

using namespace std;

int main() {
	string input;
	int caseCounter = 1;

	map<string, string> languajes = {
		{"HELLO", "ENGLISH"},
		{"HOLA", "SPANISH"},
		{"HALLO", "GERMAN"},
		{"BONJOUR", "FRENCH"},
		{"CIAO", "ITALIAN"},
		{"ZDRAVSTVUJTE", "RUSSIAN"}
	};

	while(cin >> input, input != "#") {
		cout << "Case " << caseCounter++ << ": ";
		if(languajes.count(input) <= 0) {
			cout << "UNKNOWN" << endl;
		}
		else {
			cout << languajes[input] << endl;
		}
	}

	return 0;
}