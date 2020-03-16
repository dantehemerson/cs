#include <bits/stdc++.h>

using namespace std;


struct card {
	char suit;
	char num;
};

deque<card> deck1;
deque<card> deck2;
deque<card> mesa;
int pasos;
bool turno1;

map<char, int> valor;

int main() {


	string input;

	
	valor['J'] = 1;
	valor['Q'] = 2;
	valor['K'] = 3;
	valor['A'] = 4;


	while(cin >> input) {
		if(input == "#") {
			break;
		}
		deck1.push_back({input[0], input[1]});
		for(int i = 1; i <= 51; i++) {
			cin >> input;
			if(i & 1) {
				deck2.push_back({input[0], input[1]});
			}
			else {
				deck1.push_back({input[0], input[1]});
			}
		}

		turno1 = true; // Inicia el 1
		pasos = -1;
		while(!deck1.empty() && !deck2.empty()) {

			if(turno1) {
				card c = deck1.back();
				mesa.push_back(c);
				deck1.pop_back();
				if(c.num == 'A' || c.num == 'K' || c.num == 'Q' || c.num == 'J') {
					turno1 = !turno1;
					pasos = valor[c.num];
					continue;
				}

				if(pasos >= 1){
					pasos--;
				} 					
				if(pasos == 0) {
					// Boltear la mesa
					while(!mesa.empty()) {
						deck1.push_front(mesa.back());
						mesa.pop_back();
					}
					pasos = -1;
					//turno1 = !turno1;
				}				
				else if(pasos == -1) {
					turno1 = !turno1;
				}
			}
			else {
				card c = deck2.back();
				mesa.push_back(c);
				deck2.pop_back();

				if(c.num == 'A' || c.num == 'K' || c.num == 'Q' || c.num == 'J')  {
					turno1 = !turno1;
					pasos = valor[c.num];
					continue;
				}

				if(pasos >= 1) {
					pasos--;
				}
				if(pasos == 0) {
					// Boltear la mesa
					while(!mesa.empty()) {
						deck2.push_front(mesa.back());
						mesa.pop_back();
					}
					//turno1 = !turno1;
					pasos = -1;
				}				
				else if(pasos == -1) {
					turno1 = !turno1;
				}
			}


		}

		if(!deck1.empty()) {
			cout << 2 << " " << deck1.size() << endl;
		}
		else {
			cout << 1 << " " << deck2.size() << endl;
		}


	}


	return 0;
}