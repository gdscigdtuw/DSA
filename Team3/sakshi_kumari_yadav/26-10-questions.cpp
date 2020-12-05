•	https://leetcode.com/problems/missing-number/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
       for(int i=0;i<n;i++){
           if(nums[i]!=i)
               return i;
       } 

        return n;
        }
};
•	https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n=nums.size();
        if(n==0) return 0;
        int j=0;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[j])
                j++;
            nums[j]=nums[i];


               }
    return j+1;
        }
};
•	https://leetcode.com/problems/spiral-matrix/
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {


      vector <int> ans;
        if(matrix.size()==0)
            return ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int ru=0,rd=m-1,cl=0,cr=n-1;
        while(ru<=rd && cl<=cr){
            for(int j=cl;j<=cr;j++){
                ans.push_back(matrix[ru][j]);
            }
            ru++;
            for(int i=ru;i<=rd;i++)
                ans.push_back(matrix[i][cr]);
            cr--;
            if(ru<=rd){
                for(int j=cr;j>=cl;j--)
                    ans.push_back(matrix[rd][j]);
                rd--;}
            if(cr>=cl){
                for(int i=rd;i>=ru;i--)
                    ans.push_back(matrix[i][cl]);
                cl++;
                }
            }


              return ans; 


    }
};
