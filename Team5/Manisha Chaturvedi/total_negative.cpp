/*Program to find total number of negative elements in the given matrix*/
#include<iostream>
using namespace std;
int main(){
	int m,n;
	cout<<"Enter the value of number of rows and columns in the matrix"<<endl;
	cin>>m>>n;
	int a[m][n],neg=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]<0)
				neg++;
		}
	}
	cout<<"Total negative numbers present in the given matrix is "<<neg;
	return 0;
	
}

