class Solution
{
public:
    bool isMonotonic(vector<int>& A)
    {
        
int diff = A[0] - A[A.size() - 1];
if(diff == 0)
{
for(int i = 0; i < A.size() - 1; i++)
{
if(A[i] != A[i+1]) return false;
}
}
if(diff < 0) 
{
for(int i = 0; i < A.size() - 1; i++)
{
if(A[i] > A[i+1]) return false;
}
}

    if(diff > 0) 
    {
        for(int i = 0; i < A.size() - 1; i++)
        {
            if(A[i] < A[i+1]) return false;
        } 
    }
    
    return true;
}
};
