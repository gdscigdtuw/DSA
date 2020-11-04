Problem: https://leetcode.com/problems/merge-two-sorted-lists/

Solution:

 ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode*finalHead=NULL;
    ListNode*finalTail=NULL;
    if(l1==NULL&&l2==NULL)
        return NULL;
    if(l1==NULL)
        return l2;
    if(l2==NULL)
        return l1;
    if (l1->val<l2->val){
        finalHead=l1;
  		finalTail=l1;
        l1=l1->next;
    }
    else{
        finalHead=l2;
    	finalTail=l2;
        l2=l2->next;
    }
    while(l1!=NULL&&l2!=NULL){
        if(l1->val<l2->val){
            finalTail->next=l1;
            finalTail=l1;
            l1=l1->next;
        }
        else{
            finalTail->next=l2;
            finalTail=l2;
            l2=l2->next;
        }
    }
    if(l1!=NULL){
        finalTail->next=l1;
    }
    else {
        finalTail->next=l2;
    }
    return finalHead;
    }
