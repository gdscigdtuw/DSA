class Solution {
    public int xorOperation(int n, int start) {
        int[] arr = new int[n];
        for(int i = 0;i<n;i++){
            arr[i] = start;
            start = start + 2;
        }
        int res = arr[0];
        for(int i = 1;i<arr.length;i++){
            res = res ^ arr[i];
        }
        return res;
    
        
    }
}
