class Solution {
public:
    int xorOperation(int n, int start) {
     
        int nums[n] ;
        nums[0] = start;
        int k = nums[0];
        for(int i = 1 ; i < n ; i++)
        {
            nums[i] = start + 2*i;
            k ^= nums[i];
        }
        
        return k;
    }
};
