class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        unordered_set<string> operands = {"+", "-", "*", "/"};
        stack<int> s;
        for (string token : tokens) {
            // We have a number
            if (operands.find(token) == operands.end()) {
                s.push(stoi(token));
            }
            else { // We have an operand
                int b = s.top();
                s.pop();
                int a = s.top();
                s.pop();
                if (token == "+") {
                    s.push(a + b);
                }
                else if (token == "-") {
                    s.push(a - b);
                }
                else if (token == "*") {
                    s.push(a * b);
                }
                else if (token == "/") {
                    s.push(a / b);
                }
            }
        }
        return s.top();
    }
};
