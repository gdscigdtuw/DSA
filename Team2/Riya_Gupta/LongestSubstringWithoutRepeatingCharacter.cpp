class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        
       vector<int> vec(256, -1);
        
        int maxLen = 0, start = -1;
        
        for (int i = 0; i != s.length(); i++) {
        
            if (vec[s[i]] > start)
            
                start = vec[s[i]];
           
            vec[s[i]] = i;
            
            maxLen = max(maxLen, i - start);
        }
        
        return maxLen;
        
        
    }
};
