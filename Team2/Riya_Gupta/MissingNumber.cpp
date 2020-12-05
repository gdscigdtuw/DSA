class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int total_sum = 0;
        
        int sum = 0;
        
        int size = nums.size();
        
       total_sum = (size * (size+1))/2 ;     //calculating total sum of the number from 1 to n (n is the size of the array)
        
        for(int i = 0 ; i < size ; i++)
        {
            sum+= nums[i];                  // calculating sum of the numbers in the array
        }
        
        return (total_sum - sum);         // subtracting sum of array elements from the total_sum
    }
};
