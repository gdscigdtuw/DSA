/*Longest substring without repeating characters*/
#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main(){
	string str;
	int j=0,flag=0,count=0,max=0,size=0;
	cout<<"Enter the string "<<endl;
	getline(cin,str);
	while(str[size]!='\0')
		size++;
	for(int i=0;str[i]!='\0';i++){
		j=i;
		count=1;
		while(j+1<size){
			j++;
			for(int k=j-1;k>=i;k--){
				if(str[k]==str[j]){
					flag=1;
					break;
				}
			}
			if(flag==1)
				break;
			else
				count++;
		}
		s=" ";
		flag=0;
		if(max<count)
			max=count;
		cout<<max<<endl;
	}
	cout<<"Maximum length of substring having no repititon of letters is "<<max;
	return 0;
}