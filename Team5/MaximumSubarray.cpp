class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size=nums.size();
        int maxlength=nums[0];
        int arr[size];
        arr[0]=nums[0];
        for(int i=1;i<size;i++){
            if(arr[i-1]>0){
                arr[i]=arr[i-1]+nums[i];
            }
            else{
                arr[i]=nums[i];
            }
            if(arr[i]>maxlength){
                maxlength=arr[i];
            }
        }
        return maxlength;
    }
};
