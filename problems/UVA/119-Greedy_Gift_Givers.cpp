#include <bits/stdc++.h>

using namespace std;


int main() {
	string input;
	int monto;
	int z, n;
	int counter = 1;
	while(cin >> n)  {
		vector<string> people_names_in_order;
		map<string, int> people;
		while(n--) {
			cin >> input;
			people_names_in_order.push_back(input);
			people[input] = 0;
		}

		for(int i = 0; i < people.size(); i++) {
			cin >> input >> monto >> z;			
			int monto_x_persona = monto / (z != 0 ? z : 1);			
			people[input] -= monto_x_persona * z;			
			while(z--) {
				cin >> input;
				people[input] += monto_x_persona;
			}
		}

		if(counter > 1) 
			cout << endl;
		else counter++;
		for(int i = 0; i < people.size(); i++) {
			cout << people_names_in_order[i] << " " << people[people_names_in_order[i]] << endl;
		}
	}



	return 0;
}