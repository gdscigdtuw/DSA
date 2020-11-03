class Solution {
public:
    bool isMonotonic(vector<int>& A) {
      bool dec=true,inc=true;
	for(int i=0;i<A.size()-1;++i)
		dec&=A[i]<=A[i+1], inc&=A[i]>=A[i+1];
	return dec||inc;
    }
};
