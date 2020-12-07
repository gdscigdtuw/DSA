class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    //     while(k!=0){
    //         int j = nums[nums.size()-1];
    //     for(int i=nums.size()-1; i>0; i--){
    //         nums[i] = nums[i-1];
    //     }
    //         nums[0] = j;
    //         k--;
    // }
        int n=nums.size();
        int a[n];
        for(int i=0; i<n; i++){
            a[(i+k)%n] = nums[i];
        }
        for(int i=0; i<n; i++){
            nums[i] = a[i];
        }

    }
};
