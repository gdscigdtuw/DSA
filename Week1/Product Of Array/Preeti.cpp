class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) 
    {
        int n = a.size();
        vector<int> l(n);
        vector<int> r(n);
        l[0]=1;
        for(int i = 1;i<n;i++)
        {
            l[i]=l[i-1]*a[i-1];
        }
        r[n-1]=1;
        for(int i =n-2 ; i>=0 ; i--)
        {
            r[i]=r[i+1]*a[i+1];
        }
        for(int i=0;i<n;i++)
        {
            a[i]=l[i]*r[i];
        }
        return a;
        
    }
};