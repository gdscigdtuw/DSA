class Solution {
public:
    bool isMonotonic(vector<int>& a) {
      int t = a.size();
        int k;
        for(int i = 0 ; i< t-1 ; i++)
        {
            if( (a[i] - a[i+1]) != 0)
            {
                k = a[i] - a[i+1];
                break;
            }
            else
            {
                k = a[i] - a[i+1];
            }
        }
        int pre = -100001 , post = 100001;
        if( k <= 0)
        {   
          for(int i = 0; i < t; i++)
          {
            if(a[i] >= pre)
            {
                pre = a[i];
            }
            else
            {
                return false;
            }
         }
        }
        else
        {
           for(int i = 0; i < t; i++)
           {
            if(a[i] <= post)
            {
                post = a[i];
            }
            else
            {
                return false;
            }
           }
        }
            
        return true;
    }
};
