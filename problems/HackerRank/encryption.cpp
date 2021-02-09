#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
string encryption(string s) {
    // Remove spaces
    s.erase(remove(s.begin(), s.end(), ' '), s.end());

    int r = floor(sqrt(s.size()));
    int c = ceil(sqrt(s.size()));
    
    string encoded = "";
    for(int i = 0; i < c; i++) {
        for(int j = i; j < s.size(); j += c) {
            encoded += s[j];
        }
        // If I remove the conditional, it still pass
        if(i != c - 1) encoded += " ";
    }

    return encoded;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
