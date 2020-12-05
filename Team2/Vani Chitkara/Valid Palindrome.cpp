Problem: https://leetcode.com/problems/valid-palindrome/

Solution:

bool isPalindrome(string s) {
    string str;
    for(char c : s){
        if(isalnum(c)) {
            if((c >= 65 and c <= 90))
                c=c+32;
            str+=c;
        }        
    }
    string rev = str;
    int n = rev.length()-1;
    int i = 0;
    while(i < n) {
        swap(rev[i],rev[n]);
        i++,n--;
    }
    if(str==rev)
        return true;
    return false;
}
