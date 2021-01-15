/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL||headB==NULL)
            return NULL;
        if(headB==headA)
            return headA;
        ListNode *tailA = headA;
        ListNode *tailB = headB;
        ListNode *tailsA = headA;
        ListNode *tailsB = headB;
        ListNode *x = NULL;
        int sizeA=0, sizeB=0;
        for(int i = 0; tailsA!=NULL; i++)
        {
            sizeA = i;
            tailsA = tailsA->next;
        }
        for(int i = 0; tailsB!=NULL; i++)
        {
            sizeB = i;
            tailsB = tailsB->next;
        }

        sizeA++;
        sizeB++;
        while(tailA!=NULL&&tailB!=NULL)
        {
            if(sizeA>sizeB){
                x = tailA;
                while(x!=NULL){
                if(tailB==x)
                    return x;
                x = x->next;
            }
            }
            else{
                x = tailB;
            while(x!=NULL){
                if(tailA==x)
                    return x;
                x = x->next;
            }
        }
            tailB = tailB->next;
            tailA = tailA->next;

        }
        return NULL;
    }
};
