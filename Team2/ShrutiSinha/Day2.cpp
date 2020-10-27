// 1. Rotate Array

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int a[nums.size()];
        for(int i=0;i<nums.size();i++){
            a[(i+k)%nums.size()]=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=a[i];
        }
    }
};

//2. Sieve of Eratosthenes

class Solution
{
public:
    vector<int> sieveOfEratosthenes(int n)
    {
        bool prime[n+1]; 
        vector<int> Bucket;
        memset(prime, true, sizeof(prime));
        for (int p=2; p*p<=n; p++){ 
        if (prime[p] == true){ 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
            } 
        }
        for (int p=2; p<=n; p++){
        if (prime[p]){
            Bucket.push_back(p);
            }
        }
    return Bucket;
    }  
};

//3. Count Negative Numbers in a Sorted Matrix

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size(), n = m?grid[0].size():0;
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]<0){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

//4. Maximum Subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int k=nums.size();
        int currsum=0;
        int maxsum=INT_MIN;
        for(int i=0;i<k;i++){
            currsum+=nums[i];
            if(maxsum<currsum){
                maxsum=currsum;
            }
            if(currsum<0){
                currsum=0;
            }
            
        }
        return maxsum;
    }
};
