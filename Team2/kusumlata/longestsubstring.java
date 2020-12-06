class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n = s.length();
        int a[] = new int[256];
        int i=0;
        int j=0;
        int max = 0;
        while(i<n){
            if(a[s.charAt(j)] == 0){
                a[s.charAt(j)]++;
                j++;
                max = Math.max(max , j-i);
                if(j == n)
                    break;
            }
            else{
                a[s.charAt(i)]--;
                i++;
            }
        }
        return max;
    
        
    }
}
