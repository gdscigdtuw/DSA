class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int count1=1,count2=1;
        
        for(int i=0;i<A.size()-1;i++)
        {
            if(A[i]<=A[i+1])
            {
                count1++;
            }
            if(A[i]>=A[i+1])
            {
                count2++;
            }
        }
        
        return count1==A.size() || count2==A.size();
        
    }
};