class Solution {
public:
    int BinarySearch(vector<int>nums, int l, int r, int target){
        if(r>=l){
            int mid = l + (r-l)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) return BinarySearch(nums, l, mid-1, target);
            else return BinarySearch(nums, mid+1, r, target);
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int x = BinarySearch(nums, 0, nums.size()-1, target);
        return x;
    }
};
