class Solution {
    static boolean isVowel(char c) { 
        return (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U'); 
    } 
    public String reverseVowels(String s) {
        int left = 0;
        int right = s.length() - 1;
        char[] str = s.toCharArray();
        while(left<right){
            if(!isVowel(s.charAt(left))){
                left++;
                continue;
            }
            else if(!isVowel(s.charAt(right))){
                right--;
                continue;
            }
            char sub = str[left];
            str[left] = str[right];
            str[right] = sub;
            
            left++;
            right--;
        }
        String string = String.copyValueOf(str); 
        return string;
    }
}
