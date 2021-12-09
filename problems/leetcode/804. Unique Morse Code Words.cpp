class Solution {
public:
    map<char, string> morse = {
      { 'a', ".-" },{ 'b', "-..." },{ 'c', "-.-." },{ 'd', "-.." },{ 'e', "." },{ 'f', "..-." },{ 'g', "--." },{ 'h', "...." },{ 'i', ".." },{ 'j', ".---" },{ 'k', "-.-" },{ 'l', ".-.." },{ 'm', "--" },{ 'n', "-." },{ 'o', "---" },{ 'p', ".--." },{ 'q', "--.-" },{ 'r', ".-." },{ 's', "..." },{ 't', "-" },{ 'u', "..-" },{ 'v', "...-" },{ 'w', ".--" },{ 'x', "-..-" },{ 'y', "-.--" },{ 'z', "--.." }
    };
    int uniqueMorseRepresentations(vector<string>& words) {
      
        set<string> uniqueeeeees;
        
        for(string &word: words) {
          string a = "";
          for(char &c: word) {
            a += morse[c];
          }
          uniqueeeeees.insert(a);
        } 
      
        return uniqueeeeees.size();
    }
};
