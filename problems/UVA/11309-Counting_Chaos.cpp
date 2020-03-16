#include <bits/stdc++.h>

using namespace std;


string pal;

bool isPalindrome(string cad) {	
	for(int i = 0; i < ((cad.size() + 1) / 2); i++) {
		if(cad[i] != cad[cad.size() - 1 - i]) {
			return false;
		}
	}
	return true;
}


int initPos() {
	int i;
	for(i = 0; i < pal.size() && pal[i] == '0'; i++);
	return i;
}

void sumar() {
	pal[3]++;
	if(pal[3] == ':') {
		pal[2]++;
		pal[3] = '0';
		if(pal[2] == '6') {
			pal[1]++;
			pal[2] = '0';

			if(pal[1] == ':') {
				pal[0]++;
				pal[1] = '0';				
			}
			if(pal[0] == '2' && pal[1] == '4') {
				pal[0] = pal[1] = '0';
			}
		}
	}
}

void process() {	

	do {
		sumar();
	} while(!isPalindrome(pal.substr(initPos())));
		
	cout << pal.substr(0,2) << ":" << pal.substr(2) << endl;
}

int main() {

	int n;

	cin >> n;
	while(n--) {
		cin >> pal;
		pal = pal.substr(0,2) + pal.substr(3);
		process();
	}


	return 0;
}