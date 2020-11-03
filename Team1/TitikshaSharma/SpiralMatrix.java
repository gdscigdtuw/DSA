
//Given a matrix of m x n elements (m rows, n columns), return all elements of the matrix in spiral order.
class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> result = new ArrayList<Integer>();
        if (matrix.length == 0)
            return result;
        int maxcn = matrix.length * matrix[0].length;
        int count = 0;
        int row = 0;
        int col = 0;
        int minr = 0;
        int minc = 0;
        int maxr = matrix.length;
        int maxc =  matrix[0].length;
        while (count < maxcn ){
            
            while(col < maxc ){
                result.add(matrix[row][col++]);
                count++;
            }
            col--;
            minr++;
            row++;
            while (row < maxr && count < maxcn){
                result.add(matrix[row++][col]);
                  count++;
            }
            row--;
            maxc--;
            col--;
            while (col >= minc && count < maxcn){
                 result.add(matrix[row][col--]);
                  count++;
            }
            maxr--;
            col++;
            row--;
            while(row >= minr && count < maxcn){
               result.add(matrix[row--][col]);
                  count++;
            }
            row++;
            minc++;
            col++;
        }
         
        return result;
        
        
    }
}
