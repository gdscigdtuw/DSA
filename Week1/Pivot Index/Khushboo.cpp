class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size=nums.size();
        int i,j,sum,sum2;
        int indx=size-1;
        int flag=0;
     /*   for(i=0;i<size;i++)
        {   sum=0
         sum2=0;
            for(int k=0;k<i;k++)
                sum+=nums[k];
            for(int l=i+1;l<size;l++)
                sum2+=nums[l];
            //cout<<sum<<" "<<sum2<<endl;
            if(sum==sum2)
                
            { 
                if(i<=indx)
                { indx=i;
                flag=1;}
            
         
        }}
        if(flag==0)
            return -1;
        else
       
            return indx;
        */
        sum=0;
        for(int i=0;i<size;i++)
            sum+=nums[i];
        for(int i=0;i<size;i++)
        {   sum2=0;
            for(int j=0;j<i;j++)
                   sum2+=nums[j];
            if(sum2==(sum-nums[i]-sum2))
            {
                if(i<=indx)
                {
                    indx=i;
                    flag=1;
                }
            }
        }
       if(flag==0)
           return -1;
        else return indx;
        
    }
};



