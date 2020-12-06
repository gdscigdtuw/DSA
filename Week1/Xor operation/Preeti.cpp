class Solution 
{
public:
    int xorOperation(int n, int start) 
    {
        int res=start;
      vector<int>nums;
        for(int i=0;i<n;i++)
        {
            nums.push_back(start+2*i);
        }
        for(int i=1;i<n;i++)
        {
        res=res^nums[i];
        }
        return res;
    }
};