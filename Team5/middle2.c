/*Middle of given linked list*/
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
void insertion(int,struct node**);
void display(struct node*);
int middle(int,struct node*);
int main(){
	int n1,midvalue;
	struct node*head1=NULL;
	struct node*head2=NULL;
	printf("Enter the value of number of nodes in the given linked list\n");
	scanf("%d",&n1);
	insertion(n1,&head1);
	display(head1);
	printf("\nMiddle of given linked list is \n");
	midvalue=middle(n1,head1);
	printf("\nMiddle value of the given linked list is %d",midvalue);
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
int middle(int n,struct node*head){
	int i=0;
	while(i<n/2){
		head=head->next;
		i++;
	}
	return head->data;

}

