class Solution {
public:
    void reversearr(vector<int>& nums, int low,int high) 
    {
        while(low<high)
        {
            swap(nums[low],nums[high]);
            low++;
            high--;
        }
        
    }
    
    void rotate(vector<int>& nums, int k)
    {
        int n=nums.size();
        k=k%n;
        reversearr(nums,0,n-1);
        reversearr(nums,0,k-1);
        reversearr(nums,k,n-1);
    }
};