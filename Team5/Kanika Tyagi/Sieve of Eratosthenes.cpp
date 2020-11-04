/*
Ques: Sieve of Eratosthenes
Given a number N, calculate the prime numbers up to N using Sieve of Eratosthenes.  

Example 1:

Input:
N = 10

Output:
2 3 5 7

Explanation:
Prime numbers less than equal to N 
are 2 3 5 and 7.

Ans
*/
class Solution
{
public:
    bool isPrime(int n){
        for(int i=2; i*i<=n; i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    
    vector<int> sieveOfEratosthenes(int N)
    {
        vector<int> ans;
        for(int i=2; i<=N; i++){
            if(isPrime(i)){
               ans.push_back(i);
            }
        }
        return ans;
    }
};
