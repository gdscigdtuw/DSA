class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int len = A.size();
        int count1 = 1;
        int count2 = 1;
        for(int i = 1; i < len; i++){
            if(A[i] >= A[i-1]){
                count1++;
                }
            if(A[i] <= A[i-1]){
                count2++;
                }
        }
        if(count1 == len or count2 == len){
            return true;
    }
        return false;
    }
};
