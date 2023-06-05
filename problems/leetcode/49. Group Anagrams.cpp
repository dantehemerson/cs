// Normal iterators
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       map<string, vector<string>> group;

       // O(n), n = size of array.
       for (string str: strs) {
           int count[26] = {0};

            // O(m), m = size of string
            for (char c : str) {
                count[c - 'a']++;
            }

            string key = "";

            for(int i = 0; i < 26; i++) {
                key += to_string(count[i]) + "-";
            }

            cout << key << endl;


            group[key].push_back(str);
        }


        vector<vector<string>> result;
        for (auto& pair: group) {
            result.push_back(pair.second);
        }

        return result;
    }
};


