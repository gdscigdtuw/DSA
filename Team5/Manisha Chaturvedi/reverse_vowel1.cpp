/*Reverse of vowels only*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string str;
	char temp;
	int j=0;
	cout<<"Enter the string ";
	getline(cin,str);
	for(int i=0;str[i]!='\0';i++){
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
			j=i+1;
			while(str[j]!='\0'){
				if(str[j]=='a' || str[j]=='e' || str[j]=='i' || str[j]=='o' || str[j]=='u'){
					temp=str[i];
					str[i]=str[j];
					str[j]=temp;
				}
				j++;
			}
		}
	}
	cout<<str;
	return 0;

}