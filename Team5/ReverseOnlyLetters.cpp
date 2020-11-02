class Solution {
public:
    string reverseOnlyLetters(string S) {
      int start=0;
      int end=S.size();

      while(start<end){
        if(isalpha(S[start]) && isalpha(S[end]){
            char m=S[start];
            S[start]=S[end];
            S[end]=m;
            start++;
            end--;
        }
        else if(isalpha(S[start]) && !isalpha(S[end])){
                end--;
        }
        else if(!isalpha(S[start])){
             start++;
        }
     }
      return S;
    }
};
           
