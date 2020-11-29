
class Solution {
public:
   
    void reversearray(vector<int>& nums,int start,int end){
        while(start<end){
            swap(nums[start], nums[end]);  
            start++;
            end--;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;  
        reversearray(nums,0,n-1);
        reversearray(nums,0,k-1);
        reversearray(nums,k,n-1);
    } 
};
