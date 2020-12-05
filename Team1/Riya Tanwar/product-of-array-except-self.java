class Solution {
    public int[] productExceptSelf(int[] nums) {
        
        int n = nums.length;
        int[] result = new int[n];
        result[0]=1;
        
        for (int i =0; i<n-1; i++){
            result[i+1]=result[i]*nums[i];
        }
        
        int right =1;
        for (int i=n-1;i>=0;i--){
            result[i]=right*result[i];
            right = right*nums[i];
        }
        return result;

    }
}
