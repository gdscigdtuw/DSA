•	https://leetcode.com/problems/product-of-array-except-self/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int left = 1, right = 1;
        vector<int> r(nums.size(), 1);
        for (int i=0; i<nums.size(); i++) {
            r[i] = r[i] * left;
            left = left * nums[i];
            r[nums.size()-1-i] = r[nums.size()-1-i] * right;
            right = right * nums[nums.size()-1-i];
        }
        return r;
    }
};
•	https://leetcode.com/problems/monotonic-array/
class Solution {
public:
    
    bool isMonotonicIncreasing(vector<int>& A) {
        for (int i = 1; i < A.size(); ++ i) {
            if (A[i] < A[i - 1]) {
                return false;
            }
        }
        return true;
    }
 
    bool isMonotonicDecreasing(vector<int>& A) {
        for (int i = 1; i < A.size(); ++ i) {
            if (A[i] > A[i - 1]) {
                return false;
            }
        }
        return true;
    }
    
    bool isMonotonic(vector<int>& A) {
        return isMonotonicIncreasing(A) || isMonotonicDecreasing(A);
    }
};
•	https://leetcode.com/problems/move-zeroes/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
           
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
                c++;
                i--;
                }
            }
         nums.insert(nums.end(),c,0);
            
        
        
    }
};
•	https://leetcode.com/problems/find-pivot-index/
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int s=0,ls=0;
        for(int i=0;i<n;i++)
            s=s+nums[i];
        for (int i = 0; i <n; i++) {
            if (ls == s - ls - nums[i]) return i;
            ls += nums[i];
        }
        return -1;
    }
};
