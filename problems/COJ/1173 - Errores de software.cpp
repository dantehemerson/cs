#include <bits/stdc++.h>

using namespace std;

int main() {

    vector<string> cads;


    string cad;
    while(getline(cin, cad)) {

        for(int i = 0; i <= cad.size() - 3; i++) {
            if(cad.substr(i, 3) == "BUG") {
                cad.replace(i, 3, "");
                cout << cad << endl;
                i--;
            }
        }


    }



    return 0;
}
