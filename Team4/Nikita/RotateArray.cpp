class Solution {
public:
  void rotate(vector<int>& nums, int k) {
    
    k = k%(nums.size());
    Reverse(nums,nums.size()-k,nums.size()-1);
    Reverse(nums,0,nums.size()-k-1);
    Reverse(nums,0,nums.size()-1);   
       }
      
   void Reverse(vector<int>& nums, int l , int h){
        while(l<h){
            int t= nums[l];
        nums[l]=nums[h];
        nums[h]=t;
        l++;
        h--;}
    }
}; 
