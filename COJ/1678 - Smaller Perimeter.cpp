#include <bits/stdc++.h>

using namespace std;

int main() {


    int a, b, c;
    int T;
    int perMin;
    cin >> T;
    perMin = 999999;
    while(T--) {
        cin >> a >> b >> c;
        if((a + b + c) < perMin) {
           perMin = (a + b + c);
        }
    }
    cout << perMin << endl;




    return 0;
}
