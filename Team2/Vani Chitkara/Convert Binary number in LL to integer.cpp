Problem: https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/

Solution:

int getDecimalValue(ListNode* head) {
        int num=head->val;
        while (head->next!=NULL) {
            num=num*2+head->next->val;
            head=head->next;    
        }
        return num;
    }
