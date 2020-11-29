class Solution {
    public void rotate(int[] nums, int k) {
        int[] result = new int[nums.length];
        int n = nums.length;
        if(k>n){
            k = k%n;
        }
        
        for(int i=0; i<nums.length; i++)
        {
            int index = i+k;
            if(index>=nums.length)
            {index-=nums.length;}
            
            result[index] = nums[i];
        }
        System.arraycopy(result,0,nums,0,n);
        
    }
}
