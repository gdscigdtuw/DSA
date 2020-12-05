//User function Template for C++
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        int arr[N+1] = {0};
        vector <int> vector_prime;
        int count;
        for(int i=2; i<(N+1); i++){
            if(arr[i] == 0){
                for(int j=2; j<=(N/i); j++)
                    arr[i*j] = 1;
            }
        }
        int j=0;
        for(int i=2; i<(N+1); i++){
            if(arr[i] == 0){
                vector_prime.push_back(i);
            }
        }
        return vector_prime;
        }
};
