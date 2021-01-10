#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int sumOtherYears = 215;

// Complete the dayOfProgrammer function below.
string dayOfProgrammer(int year) {
  int februaryDays = 28;
  if(year <= 1918) { // Julian
    if(year % 4 == 0) {
      februaryDays = 29;
    }    
    if(year == 1918) februaryDays -= 13; // loosed days in february 1918
  } else if(year >= 1919) {  // Gregorian
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
      februaryDays = 29;
    }
  }
  
  return to_string(256 - sumOtherYears - februaryDays) + ".09." + to_string(year);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
