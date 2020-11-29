class Solution {
    public String reverseOnlyLetters(String S) {
        int left = 0;
        int right = S.length() - 1;
        char[] str = S.toCharArray();
        while(left<=right){
            if(!Character.isLetter(S.charAt(left))){
                left++;
                continue;
            }else if(!Character.isLetter(S.charAt(right))){
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
