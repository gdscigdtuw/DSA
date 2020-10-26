class Solution {
    public int removeDuplicates(int[] nums) {
        int n = nums.length;
        if(n==0 || n==1){
            return n;
        }
        int temp[] = new int[n];
        int j = 0;
        for(int i=0;i<n-1;i++){
            if(nums[i]!=nums[i+1]){
                temp[j++] = nums[i];
            }
        }
        temp[j++] = nums[n-1];
        for(int i = 0;i<j;i++){
            nums[i] = temp[i];
        }
        return j;
    }
}
