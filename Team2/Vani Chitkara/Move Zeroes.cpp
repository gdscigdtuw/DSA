Problem: https://leetcode.com/problems/move-zeroes/

Solution: 

void moveZeroes(vector<int>& nums) {
    int size = nums.size(), i=0, j=0;
        while( j < size ){
            if( nums[j] != 0 )
			      {
            nums[i++] = nums[j];
            }
            j++;
        }
        while( i < size ){
            nums[i++] = 0;
        }
}
