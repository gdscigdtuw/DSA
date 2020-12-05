class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>res;
        int n=nums.size();
        int Left[n],Right[n];
        Left[0]=1;
        Right[n-1]=1;
        for(int i=1;i<n;i++)
        {
            Left[i]=nums[i-1]*Left[i-1];
        }
        
      for(int i=n-2;i>=0;i--)
      {
          Right[i]=nums[i+1]*Right[i+1];
      }
        
        
        for(int j=0;j<n;j++)
        {
            res.push_back(Left[j]*Right[j]);
        }
        return res;
    }
};



