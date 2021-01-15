class Solution {
public:
    bool isValid(string s) {
    stack<char> stk;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            stk.push(c);
            continue;
        }
        // now we've all closing brackets
        if (stk.empty()) return false;

        if (c == ')' && stk.top() != '(') return false;
        if (c == '}' && stk.top() != '{') return false;
        if (c == ']' && stk.top() != '[') return false;
        stk.pop();
    }
    return stk.empty();
    }
};
