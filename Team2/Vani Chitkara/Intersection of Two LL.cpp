Problem: https://leetcode.com/problems/intersection-of-two-linked-lists/

Solution:

 ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*pa = headA;
        ListNode* pb = headB;
        while (pa != pb) {
            pa = (pa != NULL) ? pa->next : headB;
            pb = (pb != NULL) ? pb->next : headA;
        }
        return pa;
    }
