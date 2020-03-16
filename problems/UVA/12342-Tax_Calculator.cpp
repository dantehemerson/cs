#include <bits/stdc++.h>

using namespace std;

int main() {

	int amount;	
	int T, testcase = 1;
	double tax;
	cin >> T;	
	while(T--) {
		cin >> amount;
		tax = 0;		
		amount -= 180000;		
		if(amount >= 1) {				
			if(amount <= 300000) {
				tax += amount * 0.1;
			}
			else {
				tax += 30000;
			}
			amount -= 300000;			
		}		
		if(amount >= 1) {		
			if(amount <= 400000) {
				tax += amount * 0.15;			
			}
			else {
				tax += 60000;
			}
			amount -= 400000;
		}

		if(amount >= 1) {
			if(amount <= 300000) {
				tax += amount * 0.2;
			}			 
			else {
				tax += 60000;
			}
			amount -= 300000;		
		}

		if(amount >= 1) {
			tax += amount * 0.25;
		}

		if(tax > 0.0 && tax < 2000.0) {
			tax = 2000;
		}

		cout << "Case " << testcase++ << ": " << int(ceil(tax)) << endl;
	}

	return 0;
}