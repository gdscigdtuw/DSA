class Solution {
public:
   
    bool isMonotonicIncreasing(vector<int>& A){
        for(int i = 0; i < A.size()-1; i++){
            if(A[i] > A[i+1]){
                return false;
            }
        }
        return true;
    }
    bool isMonotonicDecreasing(vector<int>& A){
        for(int i = 0; i < A.size()-1; i++){
            if(A[i] < A[i+1]){
                return false;
            }
        }
        return true;
    } 
    
    bool isMonotonic(vector<int>& A) {
        return isMonotonicIncreasing(A) || isMonotonicDecreasing(A);
    }
};
