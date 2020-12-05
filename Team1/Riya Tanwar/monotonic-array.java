class Solution {
    public boolean isMonotonic(int[] A) {
        int direction = -1; 
        for (int i = 0; i < A.length - 1; i++) {
            if (A[i] < A[i + 1]) {
                if (direction == -1) {
                    direction = 0;
                }
                if (direction != 0) {
                    return false;
                }
            } else if (A[i] > A[i + 1]) {
                if (direction == -1) {
                    direction = 1;
                }
                if (direction != 1) {
                    return false;
                }
            }
        }
        return true;
    }
}