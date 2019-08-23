#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	
	string text;
	
	cin >> text;
	
	if(text[0] >= 'a' && text[0] <= 'z') {
		text[0] -= 32;
	}
	
	cout << text << endl;
	
	return 0;
}
