class Solution {
public:
    bool isPalindrome(string s) {
      int l = 0, h = s.length()-1; 
   
    
    for (int i = 0; i <= h; i++) 
        s[i] = tolower(s[i]); 
        
        
    while (l < h) 
    { 
        
       
        while( !((s[l] >= 'a' && s[l] <= 'z') || (s[l] >='0' && s[l] <= '9')) && l < h){
            //cout << "s[l] : " << s[l] << endl;
            l++; 
        }
       
        while( !((s[h] >= 'a' && s[h] <= 'z') || (s[h] >='0'&& s[h] <= '9')) && l < h){
            h--; 
        } 
          
        if (s[l] != s[h]) {
           //cout << s[l] << " " << " l:" << l << " " << s[h] << endl;
           return false;
        }
        cout << s[l] << " " << " l:" << l << " " << s[h] << endl;
       l++;
       h--; 
    }   
    return true;
    }
};
