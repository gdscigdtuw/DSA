class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> stk;
        string ans;
        for(char s: S){
            if(!stk.empty() && s==stk.top())
            {
                stk.pop();
            }
            else{
                stk.push(s);
            }
        }
        while(!stk.empty()){
            ans.push_back(stk.top());
            cout<<stk.top()<<" ";
            stk.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;

    }
};
