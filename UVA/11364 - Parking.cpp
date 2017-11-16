#include <bits/stdc++.h>

using namespace std;

int main() {


    int t;
    int n;
    int num;

    int mayor;
    int menor;

    scanf("%d", &t);
    while(t--) {

        scanf("%d", &n);
        menor = 100;
        mayor = 0;
        while(n--) {
            scanf("%d", &num);

            if(num > mayor) {
                mayor = num;
            }
            if(num < menor) {
                menor = num;
            }
        }

        printf("%d\n", (mayor - menor) * 2);

    }


    return 0;
}
