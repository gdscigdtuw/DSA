q1.Count and say
class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
      
        string temp=countAndSay(n-1);  //first get the result of n-1 number
         
        
        int index=1;
        int len=temp.length();
        char temp1=temp[0];
        int count=1;
        string ans="";
        while(index<len)
        {
            if(temp[index]==temp1)  //match the current index with previous
                count++;
            else
            {                        //if not equal then update the ans string
            	string s(1,temp1);
                ans+=to_string(count)+s;
                count=1;
                temp1=temp[index];
            }
            index++;
        }
        string num=to_string(count);
        string s1(1,temp1);
       ans+=num+s1;
        return ans;
    }
};

//Reverse only letters
class Solution {
public:
    string reverseOnlyLetters(string S) {
        int i=0;
int j=S.size();

    while(i<j)
    {
        if(isalpha(S[i]) && isalpha(S[j]))
        {
            char m=S[i];
          S[i]=S[j];
            S[j]=m;
            i++;
            j--;
        }
        else if(isalpha(S[i]) && !isalpha(S[j]))
                 j--;
      else if(!isalpha(S[i]))
             i++;
        
    }
    return S;
    }
};

Longest substring without repeating characters
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int exist[CHAR_MAX];
        for(int i = 0; i < CHAR_MAX; i++)
            exist[i] = -1;
        
        size_t s_len = s.length();
        int max_len = 0;
        int start = 0;
        // sliding window
        for(int i = 0; i < s_len; i++) {
            // first occurrance
            if(exist[s[i]] == -1)
                exist[s[i]] = i;
            // occur before
            else {
                start = max(exist[s[i]] + 1, start);
                exist[s[i]] = i;
            }
            max_len = max(max_len, i-start+1);
        }
        return max_len;}
};
