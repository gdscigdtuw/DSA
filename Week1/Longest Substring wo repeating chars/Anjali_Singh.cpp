class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res=0,n=s.size(),left=0;
        unordered_map<char,int>mymap;
        for(int i=0; i<n ;++i){
            if(mymap.find(s[i])==mymap.end()){
                mymap[s[i]]=i;
            }
            else{
                if(mymap[s[i]]>=left){
                    left=mymap[s[i]]+1;
                    mymap[s[i]]=i;

                }
                else{
                    mymap[s[i]]=i;
                }
            }
            res=max(res,i-left+1);
        }
        return res;
    }
};
