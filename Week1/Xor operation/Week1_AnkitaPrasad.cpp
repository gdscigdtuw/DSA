class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>p;
        int ans=0;
        int nums[100000];
     for(int i=0; i<n; i++){
         nums[i]=start +2*i;
         p.push_back(nums[i]);
     }
        for(int i=0; i<n; i++){
          ans=ans^p[i];  
        }
        return ans;
    }
};