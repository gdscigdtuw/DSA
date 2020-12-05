class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        if(A.size()==1 || A.size()==0)
            return 1;
        
     int flag=0;
        for(int k=0;k<A.size()-1;k++)
        {   flag=0;
         
            if(A[k]>=A[k+1])
                flag=1;
         else break;
        }
        if(flag==1)
            return 1;
        for(int k=0;k<A.size()-1;k++)
        {   flag=0;
            if(A[k]<=A[k+1])
                flag=1;
         else break;
        }
        return flag;
        
    }
};