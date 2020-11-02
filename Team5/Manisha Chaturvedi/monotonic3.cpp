/*Checking for monotonic array*/
#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter the size of the array "<<endl;
	cin>>size;
	int a[size],inc=0,dec=0;
	cout<<"Enter the elements of the array "<<endl;
	for(int i=0;i<size;i++)
		cin>>a[i];
	for(int i=1;i<size;i++){
		if(a[i-1]>=a[i])
			dec++;
		if(a[i-1]<=a[i])
			inc++;
	}
	if(dec==size-1 || inc==size-1)
		cout<<"True ";
	else
		cout<<"False";
	return 0;
	
}

