class Solution {
public:
    int xorOperation(int n, int start) {
        int nums[n];
        int result=0;
        for(int i=0; i < n; i++){
            nums[i]=(start+2*i);
            result=result^nums[i];
        }
        return result;
    }
};
