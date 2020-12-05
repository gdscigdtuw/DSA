class Solution {
public:
    bool isMonotonic(vector<int>& A) {
       if(A.size()<2){
            return true;
        }
        bool flag1,flag2;
        flag1 = flag2 = true;       
        for(int i=0;i<A.size()-1;i++)
        {
            if(A[i]>A[i+1]){
                flag1 = false;
            }
            if(A[i]<A[i+1]){
                flag2 = false;
            }
            if(flag1==false&&flag2==false)
                return false;
        }
     return (flag1||flag2)?true:false;
    }
};
