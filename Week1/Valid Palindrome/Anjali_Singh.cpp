class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int l=0, r=s.size()-1;
        while(l<r){
            if((!isalpha(s[l]))&&(!isdigit(s[l]))){
                l++;
            }
            else if((!isalpha(s[r]))&&(!isdigit(s[r]))){
                r--;
            }

            else if(s[l]==s[r]){
            l++;
            r--;
          }
            else{
                return false;
            }
    }

        return true;
    }
};
