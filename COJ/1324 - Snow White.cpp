#include <bits/stdc++.h>

using namespace std;

int main() {
    int count;
    int v[9];
    int temp;
    int sum;

    for(int i = 0; i < 9; i++) {
        cin >> v[i];
    }

    for(int i = 575; i <= 1023; i++) {
        count = __builtin_popcount(i);

        if(count == 8) {
            sum = 0;
            vector<int> vect;
            temp = i;
            for(int j = 0; j < 9; j++) {
                if(temp & 1) {
                    sum += v[j];
                    vect.push_back(v[j]);
                }
                temp >>= 1;
            }

            if(sum == 100) {
                sort(vect.begin(), vect.end());
                for(int i = 0; i < vect.size(); ++i) {
                    cout << vect[i] << endl;
                }
                break;
            }

        }
    }


    return 0;
}
