#include <bits/stdc++.h>

using namespace std;

int main() {

	vector<int> sizes;
	int n, m, ni;
	cin >> n >> m;

	while(n--) {
		cin >> ni;
		sizes.push_back(ni);
	}

	sort(sizes.begin(), sizes.end(), std::greater<int>());
	int tam = 0;
	for(int i = 0; i < sizes.size(); i++) {
		tam += sizes[i];		
		if(tam >= m) {
			cout << i + 1 << endl;
			break;
		}
	}

	return 0;
}