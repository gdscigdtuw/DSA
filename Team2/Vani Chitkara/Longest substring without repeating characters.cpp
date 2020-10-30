Problem: https://leetcode.com/problems/longest-substring-without-repeating-characters/

Solution: 

int lengthOfLongestSubstring(string s) {
        int count=1;
        int max_count=1;
        int j_start=0;
    
        if(!s[0])
            return 0;
        else if(!s[1])
            return max_count;
    
        for(int i=1; s[i]; i++)
        {
            for(int j=j_start; j<i; j++)
            {
                if(s[i] != s[j])
                    count++;
                else
                    j_start = j+1;         
            }
            if(max_count < count)
                max_count = count;
            count = 1;
        }
        return max_count;
    }
