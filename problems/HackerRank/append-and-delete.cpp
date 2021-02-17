#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
    /**
    * If we have enough operations to remove the entire S string and 
    * add the new T string, then it's "Yes".
    * If we have remaining operations (k > s.length + t.length) we can
    * perform the remaining operations on empty 
    * string S which results in an empty string
    * (check the second condition)
    */
    if(s.size() + t.size() <= k) return "Yes";
    
    size_t i = 0;
    for(i = 0; s[i] == t[i]; i++);
    // We now know that up to the first i characters are the same
    
    
    // Cantity of character that are different and we need remove
    int removeFromS = (s.size() - i);
    
    // Cantity of characters that we need to add to convert S in T
    int addToS = (t.size() - i);
    
    // Minimum operations that we need to convert s to t
    int minOperations = removeFromS + addToS;
    
     // If we have more operations that we need
    if(k >= minOperations) {
        // AND...
        // If we have a pair number of operations we can perform the 
        // next operations fot these remaining pais:
        // 1 to add character from T to S + 1 to remove character from S
        // Which in total we spent 2 operations that we not need.
        // Note that if we have an impar number of operations we cannot do 
        // that operation, and it's no posible solve the problem.
        if((k - minOperations) % 2 == 0) {
            return "Yes";
        }
    }
    return "No";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
