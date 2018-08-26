#include <bits/stdc++.h>

using namespace std;

int main() {

	map<int, int> items;
	vector<int> itemsPos;	
	
	int num;
	while(cin >> num) {
		items[num]++;
		if(items[num] == 1) { // Primera vez que se agrega
			itemsPos.push_back(num);
		}
	}

	for(int i = 0; i < itemsPos.size(); i++) {
		cout << itemsPos[i] << " " << items[itemsPos[i]] << endl;
	}

	return 0;
}