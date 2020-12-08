 class Solution {
public:
    string reverseOnlyLetters(string s) {
         vector<char> result;
        map<int,char> m; 
        for(int i=0;i<s.size();i++){
            if(!isalpha(s[i])) m[i]=s[i];
            else result.push_back(s[i]);
        }
        reverse(result.begin(),result.end());
        for(auto i:m){
            result.insert(result.begin() +i.first, i.second);
        }
        string str(result.begin(), result.end());
        return str;

    }
};