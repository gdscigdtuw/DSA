class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        
        int length = nums.size();
        
        vector<int> target ;
        
         for(int i = 0 ; i < length ; i++)
             target.push_back(-1);
        
        for(int i = 0 ; i < length ; i++)
        {
            if(target[index[i]] != -1)
            {
                for(int j = length-2 ; j >= index[i] ; j--)
                {
                       
                    target[j+1] = target[j];
                }
                
                target[index[i]] = nums[i];
            }
            else
                target[index[i]] = nums[i] ;
        }
        
        return target ; 
        
        
        
    }
};
