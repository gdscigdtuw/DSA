class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int str[CHAR_MAX];
        for(int i = 0; i < CHAR_MAX; i++)
            str[i] = -1;
        
        size_t slength = s.length();
        int maxlength = 0;
        int start = 0;
        for(int i = 0; i < slength; i++) {
            if(str[s[i]] == -1)
                str[s[i]] = i;
            else {
                start = max(str[s[i]] + 1, start);
                str[s[i]] = i;
            }
            maxlength = max(maxlength, i-start+1);
        }
        return maxlength;
    }
};
