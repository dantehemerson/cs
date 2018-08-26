#include <bits/stdc++.h>

using namespace std;

int main() {

	vector<string> v;
	string input;
	bool end = false;
	while(getline(cin, input)) {
		if(input == "END") {
			if(end) break;						
			end = true;
		}		
		else {		
			if(!end) {
				size_t first_comma = input.find_first_of("\"");
				size_t last_comma = input.find_first_of("\"", first_comma + 1);
				input = input.substr(first_comma + 1, last_comma - first_comma - 1);
				v.push_back(input);						
			} else {
				if(input == "BORROW") {

				}
				else if(input == "RETURN")  {

				}
				else if(input == "SHELVE")  {
					
				}
			}
		}

	}

	return 0;
}