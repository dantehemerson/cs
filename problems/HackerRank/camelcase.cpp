#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
    size_t w = 1;
    for(size_t i = 0; i < s.size(); i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') w++;
    }
    return w;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
