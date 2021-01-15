class Solution {
public:
        string makeGood(string s) {
        stack<char> stk;
        string ans;
        for(char i: s){
            if(!stk.empty() && (i==stk.top()-32||i==stk.top()+32)){
                cout<<stk.top()+32;
                cout<<i<<" "<<stk.top();
                stk.pop();
                ans.pop_back();
            }
            else{
                stk.push(i);
                ans.push_back(i);
            }
        }
        return ans;
    }

};
