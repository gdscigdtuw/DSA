#include <iostream>
#include<cstring>
using namespace std;

void SieveOfEratothene(int n)
{
    bool prime[n+1];
    memset(prime,true,sizeof(prime));

    for(int p=2;p*p<=n;p++){
        if(prime[p]==true){
            for(int i=p*p;i<=n;i+=p){
                prime[i]=false;
            }
        }

    }
       for(int p=2;p<=n;p++){
        if(prime[p])
            cout<<p<<" ";
    }


}

int main()
{
    int n=10;
    SieveOfEratothene(n);
    return 0;
}
