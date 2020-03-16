#include <bits/stdc++.h>

using namespace std;


int main() {


    int I, A, B, C;
    int suma;

    while(cin >> I >> A >> B >> C, I | A | B | C) {
        suma = 120;
        suma += (((I - A + 40) % 40) + ((B - A + 40) % 40) + ((B - C + 40) % 40));
        suma *= 9;


        cout << suma << endl;
    }


    return 0;
}
