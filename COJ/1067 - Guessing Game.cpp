#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    int low;
    int high;
    string cad;

    bool honesto;

    low = 0;
    high = 11;
    honesto = true;

    while(cin >> n, n) {
        cin.ignore();
        getline(cin, cad);

        if(!(n > low && n < high)) {
            honesto = false;
        }

        if(cad == "too high") {
            high = n;
        }
        else if(cad == "too low") {
            low = n;
        }
        else {
            cout << (honesto ? "Stan may be honest" : "Stan is dishonest") << endl;
            low = 0;
            high = 11;
            honesto = true;
        }
    }

    return 0;
}
