/*Product*/
#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter the size of the array "<<endl;
	cin>>size;
	int a[size],product=1,output[size];
	cout<<"Enter the elements of the array "<<endl;
	for(int i=0;i<size;i++)
		cin>>a[i];
	for(int i=0;i<size;i++)
		product*=a[i];
	for(int i=0;i<size;i++)
		output[i]=product/a[i];
	for(int i=0;i<size;i++)
		cout<<output[i]<<" ";
	return 0;
	
}

