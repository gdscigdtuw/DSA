/*Program to find maximum sum in the subarray of a given array*/
#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter the size of the array "<<endl;
	cin>>size;
	int a[size],maxsum=INT_MIN,cursum=0;
	for(int i=0;i<size;i++)
		cin>>a[i];
	for(int i=0;i<size;i++){
		cursum+=a[i];
		if(cursum>maxsum)
			maxsum=cursum;
		if(cursum<0)
			cursum=0;
	}
	cout<<"Maximum sum of the subarray of given array is "<<maxsum;
	return 0;
}