class Solution {
public:
    int missingNumber(vector<int>& nums) {
		sort(nums.begin(),nums.end());
        cout<<nums.back();
		if(nums[0]!=0) return 0;
		for(int i=1;i<nums.size();i++){
			if(nums[i]-nums[i-1]!=1){
				return i;
			}
		}
		return nums.back()+1;
    }
};
