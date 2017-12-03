#include <bits/stdc++.h>

using namespace std;

struct card {
	char value, suit;
};

int main() {

	deque<card> pila; // Debio ser solo una pila 
	vector<card> mano;
	card c;
	int T, Y , X, caseCounter = 1;

	cin >> T;
	while(T--) {
		pila.clear(), mano.clear();	
		for(int i = 0; i < 27; i++) {
			cin >> c.value >> c.suit;
			pila.push_back(c);
		}
		for(int i = 0; i < 25; i++) {
			cin >> c.value >> c.suit;
			mano.push_back(c);
		}

		Y = 0;
		for(int i = 0; i < 3; i++) {
			c = pila.back();
			pila.pop_back();
			if(c.value >= '2' && c.value <= '9') {
				X = c.value - '0';
			}
			else {
				X = 10;
			}
			Y += X;
			X = 10 - X;
			while(X--) {
				pila.pop_back();
			}			
		}

		if(Y > pila.size()) {
			Y -= pila.size();
			c = mano[Y - 1];

		} else {
			for(int i = 1; i < Y; i++) {
				pila.pop_back();
			}
			c = pila.back();
		}

		cout << "Case " << caseCounter++ << ": " <<  c.value << c.suit << endl;

		
	}

	return 0;
}