class Solution {
public:
    string reverseVowels(string s) {
        
        int i=0;
        int j=(s.size())-1;
        
        while(i<j)
        {
            while(tolower(s[i])!='a' &&                                                            tolower(s[i])!='e'&& tolower(s[i])!='i'&& tolower(s[i])!='o'&&
               tolower(s[i])!='u' && i<j)
                i++;
            while(tolower(s[j])!='a' &&                                                            tolower(s[j])!='e'&&tolower(s[j])!='i'&&tolower(s[j])!='o'&&
               tolower(s[j])!='u' && j>i)
                j--;
            // cout<<s[i]<<" "<<s[j]<<endl;
            char temp;
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
          //  cout<<s[i]<<" "<<s[j]<<endl;
        i++;
            j--;
        }
        return s;
        
        
    }
};


