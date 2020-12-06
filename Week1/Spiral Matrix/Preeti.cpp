class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = 0;
        if (m>0) n = matrix[0].size();
        vector<int> out;
        if (m*n ==0) return out;
        
        int c = 0;        
        int x = 0;
        int y = 0;
        while (max(m,n)-c*2 > 0) {                
            for(y = c; y< n-c; y++) {
                x = c;
                out.push_back(matrix[x][y]);
            }   
            if (out.size() == m*n) return out;
            for (x = c+1; x<m-c;x++) {
                y = n-1-c;
                out.push_back(matrix[x][y]);
            }
            if (out.size() == m*n) return out;
            for (y = n-c-2; y >= c; y--) {
                x = m-1-c;
                out.push_back(matrix[x][y]);                
            }
            if (out.size() == m*n) return out;
            for (x = m-c-2; x > c; x--) {
                y = c;
                out.push_back(matrix[x][y]);                
            }            
            if (out.size() == m*n) return out;
            c++;
        }
        return out;
    }
};