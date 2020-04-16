#include <bits/stdc++.h>

using namespace std;


int main() {
  int T;
  int N;
  int B;
  int Ai;
  vector<int> costs;

  cin >> T;
  for(int i = 0; i < T; i++) {
    costs.clear();
    cin >> N >> B;
    while(N--) {
      cin >> Ai;
      costs.push_back(Ai);
    }

    // cout << "Lenght" << costs.size() << endl;

    sort(costs.begin(), costs.end());

    int howMany = 0;
    int amountCounter = 0;
    while(howMany < costs.size() && costs.at(howMany) + amountCounter <= B) {
      amountCounter += costs.at(howMany++);
    }

    cout << "Case #" << i + 1 << ": " << howMany << endl;
  }

  return 0;
}
