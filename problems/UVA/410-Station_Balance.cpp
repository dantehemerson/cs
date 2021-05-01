#include <bits/stdc++.h>

using namespace std;

int main() {
  int times = 0;
  short C, S;
  vector<short> M;

  while(cin >> C >> S, C) {
    times++;
    M.clear();

    short Mi;
    for(size_t i = 0; i < S; i++) {
      cin >> Mi;
      M.push_back(Mi);
    }

    sort(M.begin(), M.end());

    /** Insert zeros */
    vector<short> zeros(2 * C - S, 0);
    M.insert(M.begin(), zeros.begin(), zeros.end());

    /** Save containers and calculate average */
    vector<vector<short>> Cis(C, vector<short>());
    float average = 0;
    for(size_t i = 0; i < C; i++) {
      average += M[i] + M[M.size() - 1 - i];

      if(M[i] > 0) Cis[i].push_back(M[i]);
      Cis[i].push_back(M[M.size() - 1 - i]);
    }
    average /= C;

    /** Calculate imbalance */
    float Imbalance = 0.0;
    for(size_t i = 0; i < C; i++) {
      short Ci = M[i] + M[M.size() - 1 - i];
      Imbalance += float(abs(Ci - average));
    }

    /** Print result */
    cout << "Set #" << times << endl;
    for(int i = 0; i < Cis.size(); i++) {
      if(!Cis[i].empty()) {
        cout << i << ":";
        for(auto it = Cis[i].begin(); it != Cis[i].end(); it++) {
          cout << " " << *it;
        }
        cout << endl;
      }
    }
    cout << "IMBALANCE = " << std::fixed << std::setprecision(6) << Imbalance << endl;
  }

  return 0;
}
