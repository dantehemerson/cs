class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int calc = stoi(tokens[0]);

        for (int i = 0; i < tokens.size(); i++) {
            string tokenI = tokens[i];
            if(
                tokenI == "+" ||
                tokenI == "*" ||
                tokenI == "/" ||
                tokenI == "-"
            ) {

                int b = s.top();
                s.pop();
                int a = s.top();
                s.pop();
                switch(tokenI[0]) {
                    case '+':
                        calc = a + b;
                        break;
                    case '*':
                        calc = a * b;
                        break;
                    case '/':
                        calc = a / b;
                        break;
                    case '-':
                        calc = a - b;
                        break;
                }

                s.push(calc);
            } else {
                s.push(stoi(tokenI));
            }
        }

        return calc;
    }
}
