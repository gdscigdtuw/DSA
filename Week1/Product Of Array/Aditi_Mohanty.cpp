class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> fromBegin(n);
        fromBegin[0]=1;
        vector<int> fromLast(n);
        fromLast[n-1]=1;
        
        for(int i=1;i<n;i++)
            fromBegin[i]=fromBegin[i-1]*nums[i-1];
        
        for(int i=n-2;i>=0;i--)
            fromLast[i]=fromLast[i+1]*nums[i+1];
        
        vector<int> res(n);
        for(int i=0;i<n;i++)
            res[i]=fromBegin[i]*fromLast[i];
        
        return res;
    }

};