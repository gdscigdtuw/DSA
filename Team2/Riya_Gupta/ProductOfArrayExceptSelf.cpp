class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int length = nums.size();
        
        int left[length] , right[length] , j = length -2 ;
        
        left[0] = 1 ; right[length - 1] = 1;
        
        for(int i = 1 ; i < length ; i++)
        {
            left[i] = left[i-1]*nums[i-1];
            
            right[j] = right[j+1]*nums[j+1];
            
            j--;
        }
        
        vector<int> prod ; 
        
        for(int i = 0 ; i  < length ; i++)
        
        prod.push_back(left[i] * right[i]);
        
        return prod ; 
    
    }
};
