#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, T, i;
    scanf("%d", &T);
    while(T--) {
        scanf("%d", &n);
        for(i = 0; i < 3; i++) {
            n += 3;
            n *= 2;
        }
        printf("%d\n", n);

    }

    return 0;
}
