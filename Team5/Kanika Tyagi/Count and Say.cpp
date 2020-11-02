/* By Kanika Tyagi
Count and Say
The count-and-say sequence is a sequence of digit strings defined by the recursive formula:
countAndSay(1) = "1"
countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then converted into a different digit string.
To determine how you "say" a digit string, split it into the minimal number of groups so that each group is a contiguous section all of the same character. Then for each group, say the number of characters, then say the character. To convert the saying into a digit string, replace the counts with a number and concatenate every saying
Given a positive integer n, return the nth term of the count-and-say sequence.

Example 1:
Input: n = 1
Output: "1"
Explanation: This is the base case.

Ans:
*/
class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        else{
            string ans;
            string s=countAndSay(n-1);
            for(int i=0; i<s.length(); ){
                char count='0';
                char x=s[i];
                while(s[i]==x){
                    count++;
                    i++;
                }
                ans.push_back(count);
                ans.push_back(x);
            }
            return ans;
        }
    }
};
