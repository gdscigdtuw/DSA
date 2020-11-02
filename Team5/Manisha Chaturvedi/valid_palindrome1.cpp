/*Program to check if palindrome is valid or not in a given string*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string str1,s,c;
	int length=0,k=0,p=0,len1=0,m=0,flag=0;
	cout<<"Enter a string ";
	getline(cin,str1);
	/*length of the given string*/
	cout<<endl;
	while(str1[length]!='\0'){
		length++;
	}
	/*Outer loop for taking the number of elements in the subsets starting from 1 to size of the string*/
	for(int i=1;str1[i]!='\0';i++){
		for(int j=0;j<(length-i);j++){
			s="";
			m=0;
			p=i;
			k=j;
			c="";
			len1=0;
			/*Checking subsets*/
			while(p>=0){
				c+=str1[k];
				k++;
				p--;
				len1++;
			}
			/*Calculating the reverse of the above calculated substring*/
			while(c[m]!='\0'){
				s+=c[len1-m-1];
				m++;
			}
			/*Checking if the substring is a palindrome or not*/
			if(s==c){
				flag=1;
				break;
			}

		}
		if(flag==1)
			break;
	}
	if(flag==1)
		cout<<"true ";
	else
		cout<<"false";
	
	return 0;
}

