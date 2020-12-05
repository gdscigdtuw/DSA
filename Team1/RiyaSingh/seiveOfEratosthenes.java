class Solution{
    static ArrayList<Integer> sieveOfEratosthenes(int N){
        ArrayList<Integer> ans = new ArrayList<Integer>();
        boolean prime[] = new boolean[N+1];
        for(int i=0;i<N;i++) 
            prime[i] = true; 
        for(int p = 2; p*p < N; p++){ 
            if(prime[p] == true){
                for(int i = p*p; i <= N; i += p) 
                    prime[i] = false; 
            } 
        }
        for(int i = 2; i < N; i++){ 
            if(prime[i] == true) 
                ans.add(i);
        }
        return ans;
    }
}
