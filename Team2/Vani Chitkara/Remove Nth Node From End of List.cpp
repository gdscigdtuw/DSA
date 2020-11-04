Problem: https://leetcode.com/problems/remove-nth-node-from-end-of-list/

Solution: 

ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)
            return NULL;
        struct ListNode * dummy = new ListNode(0);
        if(head!=NULL)
        dummy->next = head;
        ListNode*first = dummy;
        ListNode*second = dummy;
     
        for (int i = 1; i <= n + 1; i++) {
            first = first->next;
        }
       
        while (first != NULL) {
            first = first->next;
            second = second->next;
        }
        second->next = second->next->next;
        return dummy->next;    
    }
