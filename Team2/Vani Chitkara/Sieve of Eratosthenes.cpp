Problem: https://practice.geeksforgeeks.org/problems/sieve-of-eratosthenes5242/1

Solution:

vector<int> sieveOfEratosthenes(int N){
  int count=0;
  int prime[N+1];
  vector<int> output;
  memset(prime , 0 ,sizeof(prime));
  for(int i=2;i*i<=N;i++)
  {
      if(prime[i]==0)
        { 
          for(int j= i*i ;j<=N ; j=j+i)
          {
              prime[j] = 1;
          }
        }
   }
          for(int i=2;i<=N;++i)
          {
              if(prime[i] == 0)
              {
                  output.push_back(i);
              } 
          }
  return output;
}
