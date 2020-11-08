#include<iostream>
using namespace std;
struct node{
	int data;
	struct node*next;
};
void insertion(int,struct node**);
void deletion(int,int,struct node*);
void display(struct node*);
int main(){
	int n,pos;
	struct node* head=NULL;
	cout<<"Enter the value of number of nodes in the linked list\n";
	cin>>n;
	insertion(n,&head);
	display(head);
	cout<<"\nEnter the position from end you want to delete\n";
	cin>>pos;
	deletion(pos,n,head);
	display(head);
	
	return 0;
}
void insertion(int n,struct node**head){
	struct node* temp=NULL;
	struct node* p=NULL;
	for(int i=0;i<n;i++){
		temp=(struct node*)malloc(sizeof(struct node));
		printf("Enter the value for node %d ",i+1);
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
	struct node* temp;
	temp=head;
	printf("\nYour given linked list is \n");
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
void deletion(int pos,int n,struct node*head){
	int i=1;
	while(i<n-pos){
		head=head->next;
		i++;
	}
	head->next=(head->next)->next;
}

