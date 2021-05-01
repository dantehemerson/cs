#include <bits/stdc++.h>

using namespace std;

void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    //cout.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(5);
}

int main() {

  FAST_IO();
  int times = 0;
  short C, S;
  vector<short> M;

  while(cin >> C >> S, C) {
    times++;
    M.clear();

    short Mi;
    float average = 0;
    for(size_t i = 0; i < S; i++) {
      cin >> Mi;
      M.push_back(Mi);
      average += Mi;
    }
    /** calculate average */
    average /= C;

    sort(M.begin(), M.end());

    /** Insert zeros */
    vector<short> zeros(2 * C - S, 0);
    M.insert(M.begin(), zeros.begin(), zeros.end());


    /** Calculate imbalance & Print result */
    cout << "Set #" << times << endl;

    float Imbalance = 0.0;
    for(int i = 0; i < C; i++) {
      cout << i << ": ";

      if(M[i]) cout << " " << M[i];
      cout << " " << M[M.size() - 1 - i] << endl;

      short Ci = M[i] + M[M.size() - 1 - i];
      Imbalance += float(abs(Ci - average));
    }
    cout << "IMBALANCE = " << std::fixed << std::setprecision(5) << Imbalance << endl;
  }

  return 0;
}

