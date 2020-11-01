class Solution {
public:
    string reverseOnlyLetters(string S) {
     
        int start = 0 , end = S.length()-1;
       
        while(start < end)
        {
           if(!isalpha(S[start]))
           {
               start++;
               continue;
           }
            if(!isalpha(S[end]))
            {
                end--;
                continue ; 
            }
            
            char temp = S[start] ; 
           S[start] = S[end] ; 
            S[end] = temp ; 
            start++;
            end--;
        }
        
        string str = "";
        
        for(int i = 0 ; i < S.length() ; i++)
        {
            str+=S[i];
        }
        
        return str ; 
        
        
    }
};
