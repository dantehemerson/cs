map<char, char> closeMap = {
    { ')', '(' },
    { '}', '{' },
    { ']', '[' },
};

class Solution {
public:
    bool isValid(string s) {
        stack<char> ps;
        
        for(size_t i = 0; i < s.size(); i++) {
            if(closeMap[s[i]]) {
                if(!ps.empty() && ps.top() == closeMap[s[i]]) {
                    ps.pop();
                } else {
                    return false;
                }
                
            } else {
                ps.push(s[i]);
            }
        }
        
        return ps.empty();
    }
};
