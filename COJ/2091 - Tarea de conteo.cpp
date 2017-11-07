#include <bits/stdc++.h>

using namespace std;

int main() {

    map<char, int> c;
    int T;
    string cad;

    cin >> T;
    while(T--) {
        cin>> cad;
        c.clear();
        for(int i = 0; i < cad.size(); i++) {
            c[cad[i]]++;
        }
        cout << c.size() << endl;
    }


    return 0;
}
