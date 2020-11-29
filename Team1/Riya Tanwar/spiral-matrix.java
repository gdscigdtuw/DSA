
class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        
        List<Integer> spiralOrderList = new ArrayList<>();
        
        if(matrix.length == 0) return spiralOrderList;

        int top = 0, bottom = matrix.length - 1; 
        int left = 0, right = matrix[0].length - 1; 

        while(top <= bottom && left <= right) {
            for(int i = left; i <= right; i++)
                spiralOrderList.add(matrix[top][i]);
            
            top++;
            
            for(int i = top; i <= bottom; i++)
                spiralOrderList.add(matrix[i][right]);
            
            right--;
            
            for(int i = right; i >= left; i--) {

                if(top > bottom) 
                    break;

                spiralOrderList.add(matrix[bottom][i]);

            }

            bottom--;

            for(int i = bottom; i >= top; i--) {
                
                if(left > right) 
                    break;

                spiralOrderList.add(matrix[i][left]);
            }

            left++;

        }

        return spiralOrderList;
    }
}
