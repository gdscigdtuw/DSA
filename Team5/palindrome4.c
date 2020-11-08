/*Palindrome or not*/
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
void insertion(int,struct node**);
void display(struct node*);
void palindrome(int,struct node*);
int main(){
	int n1;
	struct node*head1=NULL;
	struct node*head2=NULL;
	printf("Enter the value of number of nodes in the given linked list\n");
	scanf("%d",&n1);
	insertion(n1,&head1);
	display(head1);
	palindrome(n1,head1);
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
void palindrome(int n,struct node*head){
	int i=0,j=0,temp=0;
	struct node*start1;
	struct node*start;
	start=head;
	while(i<n/2){
		j=n-i-1;
		start1=head;
		while(j>0){
			start1=start1->next;
			j--;
		}
		if(start->data!=start1->data){
			temp=1;
			break;
		}
		start=start->next;
		i++;
	}
	if(temp==0)
		printf("\nPalindrome\n");
	else
		printf("\nNot a palindrome\n");
}

