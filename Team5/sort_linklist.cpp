/*Sorting of given linked list*/
#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* next;
};
void insertion(int,struct node**);
void display(struct node*);
void sort(struct node*);
int main(){
	int n1,n2;
	struct node* head1=NULL;
	struct node* head2=NULL;
	struct node* head3=NULL;
	cout<<"Enter the value of number of nodes in the first linked list\n";
	cin>>n1;
	insertion(n1,&head1);
	display(head1);
	sort(head1);
	cout<<"\nSorted linked list is \n";
	display(head1);
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
void sort(struct node*head){
	int a=0;
	struct node* start;
	struct node* check;
	start=head;
	while(start->next!=NULL){
		check=start;
		while(check->next!=NULL){
			check=check->next;
			if(check->data < start->data){
				a=check->data;
				check->data=start->data;
				start->data=a;
			}
		}
		start=start->next;
	}
}




