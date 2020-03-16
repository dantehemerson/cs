#include <bits/stdc++.h>

using namespace std;


typedef long long int lli;


lli strToInt(const string& str) {
	istringstream istr(str);
	lli value;
	istr >> value;
	return value;
}

string intToStr(lli n) {
	if (n == 0) {
		return "0";
	}
	string value;
	char mod;
	while (n > 0) {
		mod = n % 10;
		mod += 48;
		value.insert(0, 1, mod);
		n = n / 10;
	}
	return value;
}

bool isPalindrome(string cad) {
	for(int i = 0; i < (cad.size() + 1) / 2; i++) {
		if(cad[i] != cad[cad.size() - (1 + i)]) {
			return false;
		}
	}
	return true;
}

int contador;

lli calcular(lli n) {
	string s = intToStr(n);
	if(isPalindrome(s)) {
		return n;
	}
	
	contador++;
	reverse(s.begin(), s.end());
	n += strToInt(s);
	return calcular(n);
}

int main() {
	int N;
	lli P;
	cin >> N;
	while(N--) {
		cin >> P;
		contador = 0;	
		P = calcular(P);
		cout << contador << " " << P << endl;
	}

	return 0;
}