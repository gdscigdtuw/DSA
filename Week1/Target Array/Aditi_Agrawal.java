class Solution {
    public int[] createTargetArray(int[] nums, int[] index) {
        if(nums.length==0 || index.length==0){
            return nums;
        }
        ArrayList<Integer> list = new ArrayList<>();
      

      for (int i=0; i<nums.length; i++){
        list.add(index[i], nums[i]); 
      }
      for (int i=0; i<nums.length; i++){
        nums[i] = list.get(i);
      }     
      return nums;
    }
    
}