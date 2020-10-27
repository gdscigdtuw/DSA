class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      int m = matrix.size(), n = m ? matrix[0].size() : 0, ru = 0, rd = m - 1, cl = 0, cr = n - 1, p = 0;
        vector<int> order(m * n);
        while (ru <= rd && cl <= cr) {
            for (int col = cl; col <= cr; col++) {
                order[p++] = matrix[ru][col];
            }
            if (++ru > rd) {
                break;
            }
            for (int row = ru; row <= rd; row++) {
                order[p++] = matrix[row][cr];
            }
            if (--cr < cl) {
                break;
            }
            for (int col = cr; col >= cl; col--) {
                order[p++] = matrix[rd][col];
            }
            if (--rd < ru) {
                break;
            }
            for (int row = rd; row >= ru; row--) {
                order[p++] = matrix[row][cl];
            }
            if (cl++ > cr) {
                break;
            }
        }
        return order;
    }
};
