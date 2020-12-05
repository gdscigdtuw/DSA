class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int n = A.size();
        int count_inc = 0;
        int count_dec = 0;
        for(int i=0; i<n-1; i++){
            if(A[i+1]>A[i])
                count_inc++;
            if(A[i+1]<A[i])
                count_dec++;
        }
        if(count_inc == 0 || count_dec == 0)
            return true;
        else
            return false;    
         }
};
