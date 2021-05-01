#include <bits/stdc++.h>

using namespace std;

int main() {
  int times = 0;
  int C, S;

  while(cin >> C >> S, C) {
    times++;
    vector<int> M(2 * C - S, 0);

    int Mi;
    float average = 0;
    for(size_t i = 0; i < S; i++) {
      cin >> Mi;
      M.push_back(Mi);
      average += Mi;
    }

    average /= C;

    sort(M.begin(), M.end());

    /** Calculate imbalance & Print result */
    cout << "Set #" << times << endl;

    float Imbalance = 0.0;
    for(int i = 0; i < C; i++) {
      cout << i << ": ";

      if(M[i]) cout << " " << M[i];
      cout << " " << M[M.size() - 1 - i] << endl;

      int Ci = M[i] + M[M.size() - 1 - i];
      Imbalance += abs(Ci - average);
    }
    cout << "IMBALANCE = " << std::fixed << std::setprecision(5) << Imbalance << endl;
  }

  return 0;
}

