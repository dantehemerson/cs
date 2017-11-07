#include <bits/stdc++.h>

using namespace std;

int main() {
    string cad;
    cin >> cad;
    int sum = 0;
    for(int i = 0; i < cad.size(); i++) {
        sum += (cad[i] - 64);
    }
    cout << sum << endl;

    return 0;
}
