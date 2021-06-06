#include <bits/stdc++.h>

using namespace std;

int main() {

  int n, m;
  int gold, d, k;
  int stdinTemp;
  vector<int> dragon;
  vector<int> knight;


  while(cin >> n >> m, n, m) {
    dragon.clear();
    knight.clear();

    for(int i = 0; i < n; i++)  {
      cin >> stdinTemp;
      dragon.push_back(stdinTemp);
    }

    for(int i = 0; i < m; i++)  {
      cin >> stdinTemp;
      knight.push_back(stdinTemp);
    }

    // sort both arrays
    sort(dragon.begin(), dragon.end());
    sort(knight.begin(), knight.end());

    gold = d = k = 0;
    while(d < n && k < m) {
      while(dragon[d] > knight[k] && k < m) k++; // find the knight
      if(k == m) break; // knight was not found

      gold += knight[k];
      d++; k++;
    }

    if(d == n) cout << gold << endl;
    else cout << "Loowater is doomed!" << endl;
  }
  return 0;
}
