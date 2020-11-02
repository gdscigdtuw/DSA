class Solution {
public:
    vector<int> ans;
    void printResult(int x, int y, int n, int m, vector<vector<int>>& matrix){
        for(int right=y; right<=m; right++){
            ans.push_back(matrix[x][right]);
        }
        for(int down=x+1; down<=n; down++){
            ans.push_back(matrix[down][m]);
        }
        if(x != n) for(int left=m-1; left>=y; left--){
            ans.push_back(matrix[n][left]);
        }
        if(y != m) for(int top=n-1; top>x; top--) {
            ans.push_back(matrix[top][y]);
        }
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.size() == 0){
            return ans;
        }
        int n = matrix.size();
        int m = matrix[0].size();
        int curr = 0;
        int N = n-1;
        int M = m-1;
        while(ans.size() < n*m){
            printResult(curr, curr, N-curr, M-curr, matrix);
            curr++;
        }
        
        return ans;
    }
};
