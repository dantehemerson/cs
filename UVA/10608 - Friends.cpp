#include <bits/stdc++.h>

using namespace std;

int pset[30001];
int C[30001]; // Contador

void init(int n) {
    for(int i = 0; i <= n; ++i) {
        pset[i] = i;
        C[i] = 1; // Todos inician en 1
    }
}

int findSet(int i) {
    return (pset[i] == i ? i : pset[i] = findSet(pset[i]));
}

bool isSameSet(int i, int j) {
    return findSet(i) == findSet(j);
}

void unionSet(int i, int j) {
    i = findSet(i);
    j = findSet(j);
    if(i != j) {
        if(C[i] > C[j]) {
            C[i] += C[j];
            pset[j] = i;
        }
        else {
            C[j] += C[i];
            pset[i] = j;
        }

    }
}


int main() {

    int N, M, a, b, T;

    cin >> T;
    while(T--) {
        cin >> N >> M;
        init(N);
        while(M--) {
            cin >> a >> b;
            unionSet(a, b);
        }

        int max = 0;
        for(int i = 1; i <= N; i++) {
            if(C[i] > max) {
                max = C[i];
            }
        }

        cout << max << endl;

    }

    return 0;
}
