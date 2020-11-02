/*Finding pivoting index in an array*/
#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter the size of the array "<<endl;
	cin>>size;
	int a[size],leftsum=0,rightsum=0,flag=0;
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<size;i++)
		cin>>a[i];
	cout<<"Pivoting index is "<<endl;
	for(int i=1;i<size-1;i++){
		leftsum=0,rightsum=0;
		for(int j=0;j<i;j++)
			leftsum+=a[j];
		for(int j=i+1;j<size;j++)
			rightsum+=a[j];
		if(leftsum==rightsum){
			flag=1;
			cout<<i;
			break;
		}
		if(flag==1)
			break;
	}
	if(flag==0)
		cout<<"-1";
	return 0;
	
}
