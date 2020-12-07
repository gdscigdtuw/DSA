class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>ans;
        for(int i=0; i<nums.size();i++){
            //insert() is a built-in function in C++ STL which inserts new elements before the element at the specified position, effectively increasing the container size by the number of elements inserted.
            //To avoid overwriting in the array/vector
            ans.insert(ans.begin()+index[i], nums[i]);
        }
        return ans;

    }
};
