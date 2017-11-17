#include <iostream>


using namespace std;

int main() {

	int T;
	string operation;
	int mount;
	int total = 0;
	cin >> T;
	while(T--) {
		cin >> operation;
		if(operation == "donate") {
			cin >> mount;
			total += mount;
		}
		else {
			cout << total << endl;
		}
	}

	return 0;
}