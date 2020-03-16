#include <bits/stdc++.h>

using namespace std;

int main(){


	string input;
	bool first = true;
	while(getline(cin, input)) {
		for(int i = 0; i < input.size(); i++) {
			if(input[i] == '"') {
				input.replace(i, 1, (first ? "``" : "''"));
				first = !first;
			}
		}
		cout << input << endl;
	}

	return 0;
}
