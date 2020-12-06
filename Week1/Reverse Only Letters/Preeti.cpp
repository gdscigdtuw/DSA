class Solution {
public:
    string reverseOnlyLetters(string S)
    {
      
        for (int i = 0, j = S.length() - 1; i < j;) {
            if (!isalpha(S[i]))
                ++i;
            else if (!isalpha(S[j]))
                --j;
            else
                swap(S[i++], S[j--]);
        }
        return S;
    
    }
};