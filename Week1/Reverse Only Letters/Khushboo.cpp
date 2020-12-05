class Solution {
public:
    string reverseOnlyLetters(string S) {
        
        int si=0;
        int ei=(S.size())-1;
        
        while(si<ei)
        {
            while((isalpha(S[si])==0) && si<ei)
                si++;
            
            while((isalpha(S[ei])==0) && si<ei)
                ei--;
            
            char temp;
            temp=S[si];
            S[si]=S[ei];
            S[ei]=temp;
             
            si++;
            ei--;
            
        }
        
        return S;
        
    }
};


