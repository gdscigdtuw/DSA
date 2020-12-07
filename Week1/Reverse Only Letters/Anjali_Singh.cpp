class Solution {
public:
    string reverseOnlyLetters(string S) {
        int l=0, r=S.size()-1;
        while(l<r){
            if(!isalpha(S[l])){
                l++;
            }
            else if(!isalpha(S[r])){
                r--;
            }
            else{
                swap(S[l], S[r]);
                l++;
                r--;
            }
        }
        return S;

    }
};
