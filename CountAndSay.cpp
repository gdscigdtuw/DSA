class Solution {
public:
   string solve(string s){
        int count=0;
        string output="";
        for(int i=0; i<s.size(); i++){
            count++;
            if(i== s.size()-1 || s[i]!=s[i+1]){
                output+=(char)(count + '0');
                output+=s[i];
                count=0;
            }
        }
        return output;
    }
    
    string countAndSay(int n) {
        if(n==1) return "1";
        return solve(countAndSay(n-1));
    }
};
