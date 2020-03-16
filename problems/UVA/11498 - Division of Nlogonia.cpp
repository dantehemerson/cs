#include <bits/stdc++.h>

using namespace std;

int main() {

    int K, M, N, X, Y;

    while(cin >> K, K) {
        cin >> N >> M;
        while(K--) {
            cin >> X >> Y;

            if(X < N && Y < M) {
                cout << "SO";
            }
            else if(X < N && Y > M) {
                cout << "NO";
            }
            else if(X > N && Y > M) {
                cout << "NE";
            }
            else if(X > N && Y < M) {
                cout << "SE";
            }
            else {
                cout << "divisa";
            }
            cout << endl;
        }
    }

    return 0;

}
