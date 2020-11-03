class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        
        
        int length = A.size() ; 
        
        if(length == 0 || length == 1)
            return true;
        
        if(A[0] <= A[length-1])
        {
            for(int i = 0 ; i < length -1 ; i++)
            {
                if(A[i] > A[i+1])
                    return false;
                    
            }
            return true ; 
            
        }
        
        else
        {
            for(int i = 0 ; i < length -1 ; i++)
            {
                if(A[i] < A[i+1])
                    return false;
                    
            }
            return true ; 
            
        }
        
    }
};
