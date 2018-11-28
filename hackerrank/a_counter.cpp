#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    int aInS = 0;
    int diff = n % s.size();
    int diffCounter = 0;
    long aCounter = n / s.size();
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'a') {
            aInS++;
            if(i < diff) {
                diffCounter++;
            }
        }
        
    }
    aCounter *= aInS;
    aCounter += diffCounter;
    return aCounter;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
