class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
       vector <int> a;
       for(int i = 2 ; i <= N ; i++)
        {
          int flag = 1;
          for(int j = 2; j <= sqrt(i) ; j++)
          {
            if(i%j != 0)
            {
                flag = 1;
              
            }
            else
            {
                flag = 0;
                  break;
            }
          }
           if(flag == 1) 
           {
              a.push_back(i);
           }
        }
        
       return a;
    }   
};
