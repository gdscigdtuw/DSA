class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int row = matrix.size();
        
        vector<int> result ; 
        
         if(row==0)
            {
               
                return result;
            }
        
        int col = matrix[0].size();
      
        int urow = 0 , drow = row , lcol = 0 , rcol = col , count = row*col;
   
    while(urow < drow && lcol < rcol)
    {
        for(int i = lcol ; i < rcol ; i++)                  // traversing left to right
        {
            result.push_back( matrix[urow][i] );
            
        }
        
        urow ++ ; 
       
        
        for(int i = urow ; i < drow ; i ++)                 // traversing top to down
        {
            result.push_back( matrix[i][rcol-1] );
            
        }
        
        rcol--;
        
        if(urow < drow)
        {
            
            for(int i = rcol-1 ; i >= lcol ; i--)               // traversing right to left
            {
                result.push_back( matrix[drow-1][i] );

            }
            drow--;
            
        }
        
       
       
        if(rcol > lcol)
        {
            for(int i = drow-1 ; i >= urow ; i--)                   // traversing down to top
            {
                 result.push_back( matrix[i][lcol] );

            }
            lcol++;

        }
   
        
    }  
        return result;
        
    }
};
