class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0, leftSum=0, i=0;
        for( const int& num : nums ) 
            sum += num;
        for( const int& num : nums )
        {
            if( leftSum*2 == sum - num )
                return i;
            leftSum += num;
            ++i;
        }
        return -1;
    }
};
