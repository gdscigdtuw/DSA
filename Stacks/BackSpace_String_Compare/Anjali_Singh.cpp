class Solution {
public:
     bool isEqual(stack<char> &stack1, stack<char> &stack2) {
    if (stack1.empty() && stack2.empty())
      return true;
    else if (stack1.empty() || stack2.empty())
      return false;
    while (!stack1.empty() && !stack2.empty())
    {
      if (stack1.top() != stack2.top())
        return false;
      stack1.pop();
      stack2.pop();
    }
    if (stack1.empty() && stack2.empty())
      return true;
    else
      return false;
  }

    bool backspaceCompare(string S, string T) {
        stack<char> stack1;
        stack<char> stack2;
        for(char s:S){
            if(s=='#' && !stack1.empty()){
                // cout<<s<<" ";
                // cout<<stack1.top();
                stack1.pop();
                //cout<<stack1.top();
            }
            else if(s!='#'){
                //cout<<s<<endl;
                stack1.push(s);
            }
        }
        for(char t:T){
            if(t=='#' && !stack2.empty()){
                stack2.pop();
            }
            else if(t!='#'){
                //cout<<t<<" ";
                stack2.push(t);
            }
        }
       cout<<stack1.size()<<" "<<stack2.size()<<endl;
       // cout<<isEqual(stack1, stack2);
        return isEqual(stack1, stack2);

    }
};
