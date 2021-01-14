#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    /*
     * Write your code here.
     */

    // int fromLast = round(((n % 2 == 1 ? n : n + 1) - p)/2.0);
    // int fromStart = round((p - 1)/2.0);
    
    // return min(fromLast, fromStart);
    
    int pageTurns = floor(p / 2.0);
    int totalTurns = floor(n / 2.0);

    /* Returns the total number of page turns it takes to get
    to a page or how many it requires if starting from the back */

    return min(pageTurns, totalTurns - pageTurns); 
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
// 1   -- (6 - 5)/2.0 = 0.5
