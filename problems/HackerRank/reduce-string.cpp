#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string superReducedString(string s) {
    for(int i = 0; i + 1 <= s.size(); i++) {
        cout << i << endl;
        if(s[i] == s[i + 1]) {
            s.erase(i, 2);
            i = max<int>(i - 2, -1);
        }
    }
    return s == "" ? "Empty String" : s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
