class Solution {
public:
    void reverse(vector<int>& v, int begin, int end){
        while(begin < end){
            int temp = v[begin];
            v[begin] = v[end];
            v[end] = temp;
            begin++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        // REVERSE THE WHOLE ARRAY
        reverse(nums, 0, nums.size()-1);
        // REVERSE THE ARRAY TILL K;
        reverse(nums, 0, k-1);
        // REVERSE THE ARRAY FROM K+1 TO THE END
        reverse(nums, k, nums.size()-1);
    }
};
