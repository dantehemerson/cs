#include <bits/stdc++.h>

using namespace std;

int main() {

	map<int, int> items;
	vector<int> itemsPos;
	vector<int>::iterator itemsIt;

	int num;
	while(cin >> num) {
		items[num]++;

		itemsIt = find(itemsPos.begin(), itemsPos.end(), num);
		if(itemsIt == itemsPos.end()) {
			itemsPos.push_back(num);
		}
	}

	for(int i = 0; i < itemsPos.size(); i++) {
		cout << itemsPos[i] << " " << items[itemsPos[i]] << endl;
	}

	return 0;
}