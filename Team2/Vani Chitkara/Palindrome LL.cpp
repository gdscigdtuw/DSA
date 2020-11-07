Problem: https://leetcode.com/problems/palindrome-linked-list/

Solution:

 int length(ListNode *head) {
        if (head==NULL){
            return 0;
        }
    return 1+length(head->next);  
    }

    ListNode* reverse(ListNode*head) 
    { 
        ListNode* current = head; 
        ListNode *prev = NULL, *next = NULL; 
  
        while (current != NULL) { 
            next = current->next; 
            current->next = prev;  
            prev = current; 
            current = next; 
        } 
        head = prev; 
    return head;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL){
        return true;
        }
 	    ListNode*current=head;
        int mid=length(head)/2;
        for (int i=0; i<mid-1; i++){
            current=current->next;
        }
        ListNode*head2=reverse(current->next);
        current->next=NULL;
   
	    while(head2!=NULL&&head!=NULL){
        if(head->val!=head2->val){
            return false;
        }  
        head2=head2->next;
        head=head->next;
	    }
        return true;
    }
