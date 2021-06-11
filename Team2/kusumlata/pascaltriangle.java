class Solution {
    public List<List<Integer>> generate(int numRows) {
        int number=1;
        List<List<Integer>> res=new ArrayList<>();
        for(int i=0;i<numRows;i++)
        {
            List<Integer> li = new ArrayList<Integer>();
            for(int j=0;j<=i;j++)
            {
                li.add(number);
            number=number*(i-j)/(j+1);
               
            }
            number=1;
            res.add(li);
        }
        return res;
        
    }
}
