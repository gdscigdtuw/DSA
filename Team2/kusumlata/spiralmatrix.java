class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> res = new ArrayList<>();
        if (matrix.length == 0)
            return res;
        int[][] points ={{0,1},{1,0},{0,-1},{-1,0}};
        int m = matrix.length, n = matrix[0].length;
        boolean[][] seen = new boolean[m][n];
        int r = 0, c = 0, dir = 0;
        for (int i = 0; i < m * n; i++) {
            seen[r][c] = true;
            res.add(matrix[r][c]);
            int cr = r + points[dir][0];
            int cc = c + points[dir][1];
            if (cr < 0 || cr >=m || cc <0 || cc >= n || seen[cr][cc]){
                dir = (dir + 1) % 4;
                r = r + points[dir][0];
                c = c+ points[dir][1];
            }else {
                r = cr;
                c = cc;
            }
        }
        return res;
    
        
    }
}
