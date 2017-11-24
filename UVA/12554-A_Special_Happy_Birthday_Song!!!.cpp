#include <bits/stdc++.h>

using namespace std;

int main() {

	vector<string> song;
	song.push_back("Happy");
	song.push_back("birthday");
	song.push_back("to");
	song.push_back("you");
	song.push_back("Happy");
	song.push_back("birthday");
	song.push_back("to");
	song.push_back("you");
	song.push_back("Happy");
	song.push_back("birthday");
	song.push_back("to");
	song.push_back("Rujia");
	song.push_back("Happy");
	song.push_back("birthday");
	song.push_back("to");
	song.push_back("you");

	vector<string> people;

	int n;
	string input;
	cin >> n;
	while(n--) {
		cin >> input;
		people.push_back(input);
	}

	bool termina = false;
	int indice =  0;
	while(!termina) {
		for(int i = 0; i < 16; i++) {
			cout << people[indice++] << ": " << song[i] << endl;
			if(indice >= people.size()) {
				indice = 0;
				termina = true;
			}
		}
	}

	return 0;
}