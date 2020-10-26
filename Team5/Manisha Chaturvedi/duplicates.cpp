/*Program to remove duplicates from the sorted array*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the sorted array "<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]==a[i+1]){
			for(int j=i+1;j<n;j++)
				a[j]=a[j+1];
			n--;
			i--;
		}
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;

}