class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";

        string res;
        string pres = countAndSay(n-1);
        int start = 0, i = 1;
        for( ; i<pres.size(); i++ ){
            if( pres[i]!=pres[i-1] ){
                res += to_string(i-start) + pres[i-1];
                start = i;
            }
        }
        return res + to_string(i-start) + pres[i-1];
    }
};
