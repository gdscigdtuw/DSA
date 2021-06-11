class Solution {
    public int missingNumber(int[] a) {
        int missing = a.length;
        for (int i = 0; i < a.length; i++) {
            missing ^= i ^ a[i];
        }
        return missing ;
    
    }
}
