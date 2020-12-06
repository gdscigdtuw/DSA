class Solution {
    public int[] productExceptSelf(int[] arr) {
        
      int n=arr.length;
  
        int i, temp = 1; 
        int prod[] = new int[n]; 
 
            prod[0] = 1; 
  
        for (i = 0; i < n; i++) { 
            prod[i] = temp; 
            temp *= arr[i]; 
        } 
 
        temp = 1; 
 
        for (i = n - 1; i >= 0; i--) { 
            prod[i] *= temp; 
            temp *= arr[i]; 
        } 
        return prod;
    }
}