#include <bits/stdc++.h>

using namespace std;

struct binary {
	string cad;

	binary() {
		this->operator=(0);
	}
	binary& operator++() {
		increment(4);
	}
	binary& operator=(int val) {
		cad.clear();
		cad.resize(5, '0');
	}

	void increment(int n) {
		if(n < 0) return;		
		cad[n]++;
		if(cad[n] == '2') {
			cad[n] = '0';
			increment(n - 1);
		}
	}
};

int main() {

	binary a;
	map<string, char[2]> baudot;
	string shift, down;


	getline(cin, down);
	getline(cin, shift);

	a = 0;
	for(int i = 0; i < 32; i++) {
		baudot[a.cad][0] = down[i];
		baudot[a.cad][1] = shift[i];		
		++a;
	}


	// for(auto it = baudot.begin(); it != baudot.end(); it++) {
	// 	cout << it->first << "\t" << it->second[0] <<" " << it->second[1] << endl;
	// }

	string text;
	string cad;
	bool shift_val = false;
	while(getline(cin, text)) {
		shift_val = false;
		for(int i = 0; i < text.size(); i += 5) {
			cad = text.substr(i, 5);
			if(cad == "11111") shift_val = true;
			else if(cad == "11011") shift_val = false;			
			else {
				cout << baudot[cad][int(shift_val)];
			}
		}
		cout << endl;


	}


	return 0;
}

/*
<T*O HNM=LRGIPCVEZDBSYFXAWJ UQK 
>5@9 %,.+)4&80:;3"$?#6!/-2' 71( 

100100110011000010011111101110000111110111101
001100001101111001001111100001001100010001100110111100000111
*/