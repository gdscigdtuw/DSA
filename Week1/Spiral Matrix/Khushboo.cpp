class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
   vector<int>result;
     int m,n;
        m=matrix.size();
       if(m==0)
           return result;
        n=matrix[0].size();
      // cout<<m<<" "<<n<<endl;
        int i;
        int k=0,last_row=m-1,l=0,last_col=n-1;
        
        while(k<=last_row && l<=last_col)
        {
            for(i=l;i<=last_col;i++)
                result.push_back(matrix[k][i]);
            k++;
            for(i=k;i<=last_row;i++)
                result.push_back(matrix[i][last_col]);
            last_col--;
            
            if(k<=last_row)
            {for(i=last_col;i>=l;i--)
                result.push_back(matrix[last_row][i]);
            
             last_row--;}
            if(l<=last_col)
            {for(i=last_row;i>=k;i--)
                result.push_back(matrix[i][l]);
            
             l++;
            }
        }
      return result;  
        
    }
};


