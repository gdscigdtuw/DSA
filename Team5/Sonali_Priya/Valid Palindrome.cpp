class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int n = s.size();
        vector<int> string_ascii;
        for(int i=0; i<n; i++){
            int ascii_value = s[i];
            if((ascii_value>96 && ascii_value<123) || (ascii_value>47 && ascii_value<58)){
                string_ascii.push_back(ascii_value);
            }
        }
        n = string_ascii.size();
        for(int i=0; i<(n/2); i++){
            if (string_ascii[i] != string_ascii[n-i-1]){
                 return false;
            }
        }
        return true;  
    }
};
