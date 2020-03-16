#include <bits/stdc++.h>

using namespace std;

map<char, int> players = { {'S', 0}, {'W', 1}, {'N', 2}, {'E', 3} };
map<int, char> vals = { {0, 'S'}, {1, 'W'}, {2, 'N'}, {3, 'E'} };
map<char, int> suitValues = { {'C', 1}, {'D', 2}, {'S', 3}, {'H', 4} };
map<char, int> cardValues = { {'2', 2}, {'3', 3}, {'4', 4}, {'5', 5}, {'6', 6}, {'7', 7}, {'8', 8},						  {'9', 9}, {'T', 10}, {'J', 11}, {'Q', 12}, {'K', 13}, {'A', 14}, };
struct card {
	char suit;
	char num;
	bool operator<(const card& c) const {
		if(suit == c.suit) {
			return cardValues[num] < cardValues[c.num];
		}
		return suitValues[suit] < suitValues[c.suit];
	}
};

int main() {
	char dealer;
	char s, n; // para leer
	int vez;
	while(cin >> dealer, dealer != '#') {
		vez = players[dealer];
		vector<card> decks[4];
		for(int i = 0; i < 52; i++) {
			vez = (vez + 1) % 4;
			cin >> s >> n;
			decks[vez].push_back({s, n});
		}		
		for(auto it = vals.begin(); it != vals.end(); it++) {			
			// Ordenando
			sort(decks[it->first].begin(), decks[it->first].end());
			cout << it->second << ":";
			for(int j = 0; j < decks[it->first].size(); j++) {
				cout << " " << decks[it->first][j].suit << decks[it->first][j].num;
			}
			cout << endl;
		}
	}

	return 0;
}	