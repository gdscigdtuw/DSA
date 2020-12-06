class Solution {
public:
    int xorOperation(int n, int start) {
        int nums[n],result=0;
        for(int i=0;i<n;i++)
        {
            nums[i]=start+2*i;
        }
        
        int x_or=0;
        for(int i=0;i<n;i++)
        {
            x_or=x_or^nums[i];
        }
        return x_or;
    }
};



