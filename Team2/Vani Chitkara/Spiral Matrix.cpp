Problem: https://leetcode.com/problems/spiral-matrix/

Solution:

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        if(n==0)
            return {};
		vector<int> arr;
        int m=matrix[0].size();
        if(n==1){
            for(int i=0;i<m;i++){
                arr.push_back(matrix[0][i]);                
            }
            return arr;
        }
        if(m==1){
            for(int i=0;i<n;i++){
                arr.push_back(matrix[i][0]);                
            }
            return arr;
        }
        int top=0,left=0,right=m-1,bottom=n-1;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                arr.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                arr.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    arr.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--)
                    arr.push_back(matrix[i][left]);
                left++;
            }
        }
        return arr;
    }
