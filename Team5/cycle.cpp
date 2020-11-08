/*Checking if given linked list is cyclic or not*/
#include<stdlib.h>
#include<stdio.h>
struct node{
	int data;
	struct node*next;
};
void insertion(int,struct node*);
void traversal(struct node*);
void cycle(struct node*);
int main(){
	int data1,n;
	struct node* head=NULL;
	printf("Enter the number of nodes");
	scanf("%d",&n);
	insertion(n,head);

}
void insertion(int n,struct node*head){
	struct node* temp=NULL;
	struct node* p=NULL;
	for(int i=0;i<n;i++){
		temp=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(head==NULL){
			head=temp;
			head->next=head;
		}
		else{
			p=head;
			while(p->next!=head)
				p=p->next;
		p->next=temp;
		temp->next=head;
	}
	}
	traversal(head);
	cycle(head);
}
void traversal(struct node* head){
	struct node* temp;
	temp=head;
	while(temp->next!=head){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}
void cycle(struct node*head){
	int flag=0;
	struct node*start;
	start=head;
	while(start->next!=NULL && start->next!=head){
		if(start->next==NULL)
		{
			flag=1;
			break;
		}
		else
			start=start->next;
	}
	if(flag==1)
		printf("\nNo cyclicity is present\n");
	else
		printf("\nCyclicity is present\n");
}

