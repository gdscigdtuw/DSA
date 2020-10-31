class Solution {
    public int countNegatives(int[][] a) {
        int counter=0;
    for(int i=0;i<a.length;i++){
        for(int j=a[i].length-1;j>=0;j--){
            if(a[i][j]<0){
                counter++;
            }else
                break; 
        }
    }
    return counter;
} 
    }
