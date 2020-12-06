class Solution {
    public void rotate(int[] a, int k) {
          k=k% (a.length) ;

    
    reverse (a, a.length-k, a.length-1);
      reverse (a, 0, a.length-k-1);
        reverse (a, 0, a.length-1);
  }
   public static void reverse(int[] a, int i,int j)
   {
   while (i<j)
   {
       int temp= a[i];
       a[i]=a[j];
       a[j]=temp;
       i++; j--;
   }
   }
}