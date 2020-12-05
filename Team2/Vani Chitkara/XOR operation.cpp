Problem: https://leetcode.com/problems/xor-operation-in-an-array/

Solution:

int xorOperation(int n, int start) {
    int temp = start;
    int curr = start;
    for(int i=1;i<n;++i){
        curr+=2;
        temp^=curr;
    }
return temp;
}
