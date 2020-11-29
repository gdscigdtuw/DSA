class Solution {
    public void rotate(int[] nums, int k) {
        int len = nums.length;
        int[] temp = new int[len];
        Arrays.fill(temp, -1);
        for(int i=0;i<len;i++){
            temp[(i+k)%len] = nums[(i+k)%len];
            nums[(i+k)%len] = temp[i]!=-1 ? temp[i]:nums[i];
        }
    }
}
