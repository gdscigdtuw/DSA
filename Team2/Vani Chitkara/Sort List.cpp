Problem: https://leetcode.com/problems/sort-list/

Solution:

 int length(ListNode *head)
    {
        int count = 0; 
        ListNode* current = head;  
        while (current != NULL)  
        {  
            count++;  
            current = current->next;  
        }  
        return count;  
    }

    ListNode*merge(ListNode*head1,ListNode*head2){
	    ListNode*newHead=NULL;
	    if(head1==NULL) return head2;
	    else if(head2 ==NULL) return head1;
	    if(head1->val < head2->val){
		    newHead = head1;							
		    newHead->next = merge(head1->next,head2);	
	    }
	    else{
		    newHead = head2;
		    newHead->next = merge(head1,head2->next);
	    }
	    return newHead;
    }
    
    ListNode* sortList(ListNode* head) {
        if(head==NULL||head->next==NULL){
        return head;
        }
        int mid=length(head)/2;
        ListNode*current=head;
   	    for(int i=0; i<mid-1; i++){
            current=current->next;
        }
        ListNode*head2=current->next;
        current->next=NULL;
        ListNode*newHead1=sortList(head);
        ListNode*newHead2=sortList(head2);
        ListNode*newHead=merge(newHead1,newHead2);
        return newHead;
    }
