class Solution {
public:
    bool isPalindrome(string s) {
        
        string str = "";
        
        if(s.length()==0 || s.length()==1)
            return true ; 
        
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(isalnum(s.at(i)))
                str.push_back(tolower(s.at(i)));
        }
        
        int start = 0 , end = str.length()-1 ; 
        
       
        
        while(start < end)
        {
            if(str.at(start)==str.at(end))
            {
                start++;
                end--;
            }
            else
                return false ; 
        }
        return true ; 
        
    }
};
