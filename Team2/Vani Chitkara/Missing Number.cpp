Problem: https://leetcode.com/problems/missing-number/

Solution:

int missingNumber(vector<int>& nums) {
  int n=nums.size();
  int sum=(n*(n+1))/2;
  int arraysum=0;
  for(int i=0; i<n; i++){
    arraysum+=nums[i];
  }
  return sum-arraysum;
}
