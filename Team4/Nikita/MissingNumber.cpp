class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int t = nums.size();
        int arr[t];
        for(int i = 0; i < t ; i++) arr[i] = 0;
        for( int i = 0 ; i < t ; i++)
        {
            int k = nums[i];
            if(k < t) ++arr[k];
        }
        int i;
        for( i = 0; i < t; i++)
        {
            if(arr[i] == 0)
            {
                break;
            }
        }
        return i;
    }
};
