class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int max_,curr;
        max_=curr=nums[0];
        
        for(int i=1;i<nums.size();i++)
        {
            if(curr>=0)
                curr+=nums[i];
            else if(curr<0)
                curr=nums[i];
            
            if(curr>=max_)
                max_=curr;
           cout<<curr<<" "<<max_<<endl; 
        }
        return max_;
        
        
        
    }
};


