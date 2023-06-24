class Solution {
public:
    vector<string> generateParenthesis(int n) {
       vector<string> answer;

       this->backtracking(answer, n, "", 0, 0);

       return answer;
    }

    void backtracking(vector<string>& v, int n, string s, int open, int closed) {
       if(s.size() == 2 * n)  {
           v.push_back(s);
           return;
       }

       if (open < n) {
           s.push_back('(');
           this->backtracking(v, n, s, open + 1, closed);
           s.pop_back();
       }

       if (closed < open) {
           s.push_back(')');
           this->backtracking(v, n, s, open, closed + 1);
           s.pop_back();
       }
    }
};
