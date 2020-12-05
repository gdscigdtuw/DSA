class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size=nums.size();
            sort(nums.begin(),nums.end());
    
        if(nums[0]==size-1 && size==1) return nums[0]+1;  
        int i;
   for( i=0;i<size;i++)
       
   {    
       { if(nums[i]!=i)
          return i;
       }
       
   }
             
     return i;
    }   
};


