#include <bits/stdc++.h>

using namespace std;


int main() {

    int t;

    int a, b;
    cin >> t;
    while(t--) {
        cin >> a >> b;
        if(a < b) {
            cout << "<";
        }
        else if(a > b) {
            cout << ">";
        }
        else {
            cout << "=";
        }
        cout << endl;
    }


    return 0;
}
