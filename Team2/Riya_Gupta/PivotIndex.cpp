class Solution {
public:
    int pivotIndex(vector<int>& nums) {
     
        int sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            
        }
        
        int leftsum=0 , checksum = 0;
       
        int i;
    
        for(i=0;i<nums.size();i++)
        {
            checksum=sum-nums[i];
            
            if((checksum%2==0)&&(checksum/2==leftsum))
            {
               return i;   
            }
            leftsum+=nums[i];
        }
       return -1;
    }
};
