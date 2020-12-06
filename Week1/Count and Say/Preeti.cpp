class Solution {
public:
    string countAndSay(int n) 
    {
        vector<string> vec(n);
        vec[0]="1";
        for(int i=1;i<n;i++)
        {
            string current="";
            for(int j=0;j<vec[i-1].size();j++)
            {
                int k=j;
                while(k<vec[i-1].size()-1 && vec[i-1][k]==vec[i-1][k+1])    k++;
                current += to_string(k-j+1);
                current.append(1,vec[i-1][j]);
                j=k;
            }
            vec[i]=current;
        }
        return vec[n-1];
        
    }
};