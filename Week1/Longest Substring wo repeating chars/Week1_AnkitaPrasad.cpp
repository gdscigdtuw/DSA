class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int i=0,j=0,ans=0;
        set<char> a;
        while(i<s.size()&&j<s.size()){
            if(a.find(s[j])==a.end()){
                a.insert(s[j++]);
                ans=max(ans,j-i);
            }
            else{
                a.erase(s[i++]);
            }
        }
        return ans;
    }
};