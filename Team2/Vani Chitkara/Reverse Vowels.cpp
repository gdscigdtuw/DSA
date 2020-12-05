Problem: https://leetcode.com/problems/reverse-vowels-of-a-string/

Solution:

bool isVowel(char e){
return e == 'a' || e == 'e' || e == 'i' || e == 'o' || e == 'u' || e == 'A' || e == 'E' || e == 'I' || e == 'O' || e == 'U';
}

string reverseVowels(string s) {
    int i = 0;
    int j = s.size()-1;
    while(i<j){
        if(isVowel(s[i])){
            if(isVowel(s[j])){
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else{
                j--;
            }
        }
        else{
            i++;
        }
    }
    return s;
}
