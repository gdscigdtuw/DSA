class Solution {
public:
    void rotate(vector<int>& nums, int k)
    {
        reverse(nums.begin() , nums.end());
        for(int i=0 ; i<k ; i++)
        {
            int x=nums[0];
            nums.push_back(x);
            nums.erase(nums.begin());
        }
        reverse(nums.begin() , nums.end());
    }
};
