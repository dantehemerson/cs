#include <bits/stdc++.h>

using namespace std;

int main() {

    int T;
    int a, b, res, r;
    char op, t;

    cin >> T;
    while(T--) {
        cin >> a;
        cin >> op;
        cin >> b;
        cin >> t;
        cin >> res;
        switch(op) {
            case '+':
                r = a + b;
                break;
            case '-':
                r = a - b;
                break;
            case '/':
                if(b!= 0) {
                    r = a / b;
                }
                else {
                    r = -1;
                }
                break;
            case '*':
                r = a * b;
                break;
        }

        if(r == res) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }

    }



}

