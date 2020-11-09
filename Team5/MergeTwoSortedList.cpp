class Solution {
public:
    ListNode *merge(ListNode *first,ListNode *second)
    {
        if(first==NULL) return second;
        if(second==NULL) return first;
        if(first->val<=second->val)
        {
            first->next=merge(first->next,second);
            return first;
        }
        else
        {
            second->next=merge(first,second->next);
            return second;
        }
    }
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head=merge(l1,l2);
        return head;
    }
};
