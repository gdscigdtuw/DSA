Problem: https://leetcode.com/problems/product-of-array-except-self/

Solution:

 vector<int> productExceptSelf(vector<int>& nums) {
    int size=nums.size();
    vector<int> answer(size);
    answer[0]=1;
    for (int i=1; i<size; i++) 
    {  
        answer[i] = nums[i-1]*answer[i-1];
    }
    int R = 1;
    for (int i=size-1; i>= 0; i--) 
    {
        answer[i] = answer[i]*R;
        R*=nums[i];
    }
  return answer;   
}
