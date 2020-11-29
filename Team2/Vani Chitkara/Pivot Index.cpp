Problem: https://leetcode.com/problems/find-pivot-index/

Solution:

int pivotIndex(vector<int>& nums) {
    int n=nums.size();
      if(n==0) 
      return -1;
    int totalsum = 0, leftsum = 0;
    for(int i=0; i<n; i++)
        totalsum += nums[i];
    for(int i=0; i<n; i++) {
        if(leftsum == (totalsum-nums[i]))
            return i;
        else {
            leftsum+=nums[i];
            totalsum-=nums[i];   
        }
    }    
return -1;
}
