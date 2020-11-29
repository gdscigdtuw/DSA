class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        bool primes[N];
        
        for(int i = 1 ; i < N ; i++)                        // initializing every number to false
        {
            primes[i] = false ; 
        }
        
        primes[0] = true ;                                // 1 is neither prime nor composite so it is not counted
        
        int prod = 1 ; 
        
        vector<int>prime;                                 // vector that will store prime numbers
        
        for(int i = 1 ; i < N ; i++)                      // visiting every number lesser and equal to limit
        {
            if(primes[i] == false)                        // if the smallest number int the unvisited group is unmarked then push it in the vector
            {
                int p = i+1;                              //and mark its multiple true
                
                prime.push_back(p);
                while(true)
                {
                    prod = (i+1)*(p);
                    
                    if(prod > N)
                    {
                        break;
                    }
                    
                    primes[prod - 1] = true ; 
                    
                    p++;
                }
            }
        }
        
        return prime ;
        
      
    
    }
};
