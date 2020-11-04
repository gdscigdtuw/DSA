/*Prigram to find the prime */
#include<iostream>
using namespace std;
int main(){
	int n,flag=1,j=2;
	cout<<"Enter the value of n "<<endl;
	cin>>n;
	if(n>1){
	cout<<"Prime numbers between 1 to "<<n<<" is given by "<<endl;
	while(j<=n){
		flag=1;
		for(int i=2;i*i<=j;i++){
			if(j%i==0)
				flag=0;
			
		}
		if(flag==1)
			cout<<j<<" ";
		j++;
	}
}
	else
		cout<<"No prime numbers is present "<<endl;
	return 0;
	
}

