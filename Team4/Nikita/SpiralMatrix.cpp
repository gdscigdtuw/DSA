class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
          vector<int> result;
        
        if(matrix.size() == 0) return result;
        
        int top = 0;
        int right = matrix[0].size()-1;
        int bottom = matrix.size()-1;
        int left = 0;
        
        int length = matrix.size() - 1;
        int breadth = matrix[0].size() - 1;
        
        int direction = 1;
        
        while(top <= bottom && left <= right){
            
            switch(direction){
            case 1:
            for(int i = left; i<=breadth - (breadth - right); i++)
                result.push_back(matrix[top][i]);
                top++;
                direction = 2;
                break;
            
                
            case 2:      
            for(int i = top; i<=length - (length - bottom); i++)
                result.push_back(matrix[i][right]);
                right--;
                direction = 3;
                break;
            
            case 3:
            for(int i = breadth - (breadth - right); i>=left; i--)
                result.push_back(matrix[bottom][i]);
                bottom--;
                direction = 4;
                break;
            
            case 4:
            for(int i = length-(length - bottom); i>=top; i--)
                result.push_back(matrix[i][left]);
                left++;
                direction = 1;
                break;
            }
                 
        }
        
        return result;
        
    }
};
