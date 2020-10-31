/*Target array in given order*/
#include<iostream>
using namespace std;
int main(){
	int size,j=0;
	cout<<"Enter the size of the array "<<endl;
	cin>>size;
	int target[size],value[size],index[size];
	cout<<"Enter the values for value array"<<endl;
	for(int i=0;i<size;i++)
		cin>>value[i];
	cout<<"Enter the values for index array "<<endl;
	for(int i=0;i<size;i++)
		cin>>index[i];
	for(int i=0;i<size;i++)
		target[i]=0;
	for(int i=0;i<size;i++){
		j=index[i];
		if(target[j]!=0){
			for(int k=size-1;k>j;k--)
				target[k]=target[k-1];
			target[j]=value[i];
		}
		else
			target[j]=value[i];
	}
	cout<<"Target array is "<<endl;
	for(int i=0;i<size;i++)
		cout<<target[i]<<" ";
	return 0;

}