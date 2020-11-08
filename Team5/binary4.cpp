/*Binary to decimal*/
#include<iostream>
#include<math.h>
using namespace std;
struct node{
	int data;
	struct node* next;
};
void insertion(int,struct node**);
void display(struct node*);
int binary(int,struct node**);
int main(){
	int n1,result;
	struct node* head1=NULL;
	cout<<"Enter the value of number of nodes in the first linked list\n";
	cin>>n1;
	insertion(n1,&head1);
	display(head1);
	result=binary(n1,&head1);
	cout<<"\nDecimal of given binary number is \n"<<result;
	return 0;
}
void insertion(int n,struct node** head){
	struct node* temp=NULL;
	struct node* p=NULL;
	for(int i=0;i<n;i++){
		temp=(struct node*)malloc(sizeof(struct node));
		printf("Enter the value of node %d ",i+1);
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(*head==NULL)
			*head=temp;
		else{
			p=*head;
			while(p->next!=NULL)
				p=p->next;
			p->next=temp;
		}
	}
}
void display(struct node* head){
	while(head!=NULL){
		printf("%d ",head->data);
		head=head->next;
	}
}
int binary(int n,struct node**head){
	int i=0,sum=0;
	struct node*start;
	start=*head;
	while(start!=NULL){
		sum+=pow(2,n-i-1)*start->data;
		printf("%d ",start->data);
		i++;
		start=start->next;
	}
	return sum;
}