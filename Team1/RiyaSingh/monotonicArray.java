class Solution {
    public boolean isMonotonic(int[] A) {
        for(int i=0;i<A.length;i++){
            for(int j=i;j<A.length;j++){
                if(A[i]<=A[j]){
                    return true;
                }
            }
            for(int j= A.length-1;j>=i;j--){
                if(A[i]>=A[j]){
                    return true;
                }
            }
        }return false;
    }
}
