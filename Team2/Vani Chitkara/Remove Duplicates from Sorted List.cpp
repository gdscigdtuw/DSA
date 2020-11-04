Problem: https://leetcode.com/problems/remove-duplicates-from-sorted-list/

Solution:

 ListNode* deleteDuplicates(ListNode* head) {
    if(head==NULL||head->next==NULL){
    return head;
    }
    ListNode*t1=head;
    ListNode*t2=head->next;
    while(t2!=NULL){
        if(t1->val==t2->val){
            ListNode*a= t2;
    		t2=t2->next;
    		delete a;
            t1->next=t2;
        }
        else {
            t2=t2->next;
            t1=t1->next;
        }
    }
    t1->next=t2;
    return head;
    }
};
