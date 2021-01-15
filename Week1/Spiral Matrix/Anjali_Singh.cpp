class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r=matrix.size(), c=matrix[0].size();
        vector<int> ans;
        int k=0, l=0;
        while(k<r && l<c){
        for(int i=l; i<c; i++){
            ans.push_back(matrix[k][i]);
        }
        k++;
        for(int i=k; i<r; i++){
            ans.push_back(matrix[i][c-1]);

        }
        c--;
        if(k<r){
        for(int i=c-1; i>=l; i--){
            ans.push_back(matrix[r-1][i]);
        }
            r--;
        }
        if(l<c){
        for(int i=r-1; i>=k; i--){
            ans.push_back(matrix[i][l]);
        }
        l++;
        }
        }

        return ans;
    }
};
