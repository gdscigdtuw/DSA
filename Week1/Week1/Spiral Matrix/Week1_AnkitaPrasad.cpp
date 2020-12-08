class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int right =matrix[0].size()-1;
        int bottom = matrix.size()-1;
        int left = 0;
        int top=0;
        int direction = 0;
        vector <int> ans;
        while(top<= bottom && left <= right){
        if (direction==0){
            for (int i =left; i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            top +=1;
            direction +=1;
        }
        else if (direction ==1){
            for(int i=top; i<=bottom; i++){
                ans.push_back(matrix[i][right]) ;
            }
            direction +=1;
            right -=1;
        }
        else if (direction ==2){
            for(int i =right; i>=left; i--){
                ans.push_back(matrix[bottom][i]);
            }
            direction +=1;
            bottom -=1;
        }
        else if (direction ==3){
            for(int i=bottom; i>=top; i--){
                ans.push_back(matrix[i][left]);
            }
            direction =0;
            left +=1;
        }
    }
     
    return ans; 
    }
};