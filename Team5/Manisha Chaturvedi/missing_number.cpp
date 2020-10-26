/*Program to find missing number in array*/
#include<iostream>
using namespace std;
int main(){
	int n,s1=0,s2=0;
	cout<<"Enter the size of the array "<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	s1=n*(n+1)/2;
	for(int i=0;i<n;i++){
		s2+=a[i];
	}
	cout<<"Missing number is "<<s1-s2;
	return 0;
}
