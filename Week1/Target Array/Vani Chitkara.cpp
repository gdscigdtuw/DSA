Problem: https://leetcode.com/problems/create-target-array-in-the-given-order/

Solution:

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    vector<int> output;
    for(int i=0; i<nums.size(); i++){
    output.insert(output.begin()+index[i],nums[i]);
    }       
    return output;
}
