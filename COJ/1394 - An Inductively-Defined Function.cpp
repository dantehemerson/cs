#include <bits/stdc++.h>

using namespace std;


long long int f(int n) {
    if(n == 1) {
        return 1;
    }
    else if(n%2 == 0) {
        return n/2;
    }
    else {
        n -= 1;
        n /= 2;
        return f(n) + f(n +1);
    }
}

int main() {

    int n;
    while(cin >> n, n != -1){
        cout << f(n) << endl;
    }

    return 0;
}
