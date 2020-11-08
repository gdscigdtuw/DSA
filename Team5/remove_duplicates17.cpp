/*Removing duplicates from the given linked list*/
#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* next;
};
void insertion(int,struct node**);
void display(struct node*);
void duplicates(struct node*);
int main(){
	int n1,n2;
	struct node* head1=NULL;
	struct node* head=NULL;
	cout<<"Enter the value of number of nodes in the linked list\n";
	cin>>n1;
	insertion(n1,&head1);
	display(head1);
	duplicates(head1);
	cout<<"\nLinked list after removel of duplicates is \n";
	display(head1);
	return 0;
}
void insertion(int n,struct node** head){
	struct node* temp=NULL;
	struct node* p=NULL;
	for(int i=0;i<n;i++){
		temp=(struct node*)malloc(sizeof(struct node*));
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
void duplicates(struct node* head){
	struct node* del;
	struct node* start;
	struct node* check;
	start=head;
	while(start->next!=NULL){
		if(start->data == start->next->data){
			del=start->next->next;
			free(start->next);
			start->next=del;
		}
		else
			start=start->next;
	}
}
