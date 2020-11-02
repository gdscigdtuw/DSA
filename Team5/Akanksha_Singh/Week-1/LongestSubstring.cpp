class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int arr[256]={0};
       int i=0, j=0, count=0; 
        while(j<s.length()){
            if(!arr[s[j]]){
                arr[s[j++]]++;
                count=max(j-i, count);
            }
            else{
                arr[s[i]]--;
                i++;
            }
        }
        return count;
    }
};
