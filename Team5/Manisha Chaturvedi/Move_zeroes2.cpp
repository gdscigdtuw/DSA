/*Moving zeroes at the end*/
#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter the size of the array "<<endl;
	cin>>size;
	int a[size],temp=0,count=0;
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<size;i++)
		cin>>a[i];
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<size;i++){
		if(a[i]!=0)
			count++;
	}
	while(count>0){
		temp=a[size-1];
		for(int i=size-1;i>0;i--)
			a[i]=a[i-1];
		a[0]=temp;
		count--;
	}
	cout<<"Array after moving all the zeroes at the end is "<<endl;
	for(int i=0;i<size;i++)
		cout<<a[i]<<" ";
        cout<<endl;
        return 0;
	
}


