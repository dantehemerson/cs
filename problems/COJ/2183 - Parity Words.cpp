#include <bits/stdc++.h>

using namespace std;


int main() {

    int T, s;
    string cad;
    cin >> T;
    while(T--) {
        getline(cin, cad);
        s = 0;
        for(int i = 0; i < cad.size(); i++) {
            if(int(cad[i]) %2 == 0) {
                s++;
            }
        }

        if(s > (cad.size() - s)) {
            cout << "Even" << endl;
        }
        else {
            cout << "Odd" << endl;
        }
    }


    return 0;
}
