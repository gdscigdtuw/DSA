/*Program to find the spiral matrix*/
#include<iostream>
using namespace std;
int main(){
	int m,n;
	cout<<"Enter the value of number of rows and columns in the matrix"<<endl;
	cin>>m>>n;
	int a[m][n],c=0,r=0;
	cout<<"Enter the elements of the arrray "<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	cout<<"Given matrix is "<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Spiral of given matrix is "<<endl;
	while (r<m && c<n){
			for(int i=c;i<n;i++)
				cout<<a[r][i]<<" ";
			r++;
			for(int j=r;j<m;j++)
				cout<<a[j][n-1]<<" ";
			n--;
			for(int k=n-1;k>=c;k--)
				cout<<a[m-1][k]<<" ";
			m--;
			for(int l=m-1;l>=r;l--)
				cout<<a[l][c]<<" ";
			c++;
		}
		return 0;
	}
