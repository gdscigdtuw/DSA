class Solution {
public:
    bool isVowel(char i){
        i = tolower(i);
        if(i=='a'||i=='e'||i=='i'||i=='u'||i=='o'){
            return true;
        }
        return false;

    }
    string reverseVowels(string s) {
        int l=0, r=s.size()-1;
        while(l<r){
            if(!isVowel(s[l])){
                l++;
            }
            else if(!isVowel(s[r])){
                r--;
            }
            else if(isVowel(s[l])&&isVowel(s[r])){
                swap(s[l], s[r]);
                l++;
                r--;
            }

        }
        return s;
    }
};
