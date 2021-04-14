class Solution {
    public String reverseVowels(String s) {
        char[] arr = s.toCharArray();
        int front = 0, back = s.length() - 1;
        while (front <= back) {
            char f = arr[front];
            if (isVowel(f)) {
                char b = arr[back];
                if (isVowel(b) && front != back) {
                    swap(arr, front, back);
                    front++;
                    back--;
                } else {
                    back--;
                }
            } else {
                front++;
            }
        }
        return new String(arr);
    }
    
    public boolean isVowel(char c) {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'
         || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
        return false;
    }
    
    public void swap(char[] arr, int i, int j) {
        char tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}