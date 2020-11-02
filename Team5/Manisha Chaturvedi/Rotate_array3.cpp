/*Program to rotate the given array*/
#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter the size of the array "<<endl;
	cin>>size;
	int a[size],k,temp=0;
	cout<<"Enter the elements of the array "<<endl;
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<"Enter the number from which you want to rotate the given array "<<endl;
	cin>>k;
	while(k>0){
		temp=a[size-1];
		for(int i=size-1;i>0;i--)
			a[i]=a[i-1];
		a[0]=temp;
		k--;
	}
	cout<<"Array after rotation is given by "<<endl;
	for(int i=0;i<size;i++)
		cout<<a[i]<<" ";
	
	return 0;

}
