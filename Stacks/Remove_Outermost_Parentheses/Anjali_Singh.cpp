class Solution {
public:
    string removeOuterParentheses(string S) {

        stack <char> st;
        string ans;



        for(char& c : S)
        {
            //for opening brackets
            // if it is not the outer most bracket then we will take it into ans string and push it to stack for later comparison.
            if (c == '(' && st.size()>=1)
            {
                ans.push_back('(');
                st.push('(');
            }
            // if c is outer most bracket then push it into stack for later comparison
            else
            {
                if (c == '(' && st.size() == 0)
                {
                    st.push('(');
                }
            }


            //for closing brackets

            if (c == ')' && st.size()>1)
            {
                ans.push_back(')');
                st.pop();
            }
            else
            {
                if (c == ')' && st.size() == 1)
                {
                    st.pop();
                }
            }
        }


        return ans;

    }
};
