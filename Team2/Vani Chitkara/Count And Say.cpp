Problem: https://leetcode.com/problems/count-and-say/

Solution:

string countAndSay(int n) {
        if(n==1)
            return "1";
      
        string temp=countAndSay(n-1);  
        int index=1;
        int len=temp.length();
        char temp1=temp[0];
        int count=1;
        string ans="";
        while(index<len)
        {
            if(temp[index]==temp1)  
                count++;
            else
            {                        
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
