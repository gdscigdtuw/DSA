class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> x;
        int a=start, s;
        for(int i=0; i<n; i++){
            s = start + 2*i;
            x.push_back(s);
        }
        for(int i=1; i<x.size(); i++){
            a ^= x[i];
        }
        return a;
    }
};
