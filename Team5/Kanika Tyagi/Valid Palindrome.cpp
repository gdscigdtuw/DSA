/*
Valid Palindrome
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
Note: For the purpose of this problem, we define empty string as valid palindrome.

Example 1:
Input: "A man, a plan, a canal: Panama"
Output: true

Ans:
*/
class Solution {
public:
    bool isPalindrome(string s) {
		string ans;
        int n=s.length();
		int k;
        for(int i=0; i<n; i++){
            if(isalnum(s[i])){
            	ans.push_back(tolower(s[i]));
            }
        }
        k=ans.length();
        for(int j=0; j<(k/2); j++){
            if(ans[j]!=ans[k-j-1]){
                return false;
            }
        }
        return true;
}
};
