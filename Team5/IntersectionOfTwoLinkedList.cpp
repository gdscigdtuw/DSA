class Solution {
public:
   ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> uset;
        while(headA) {
            uset.insert(headA);
            headA = headA->next;
        }
        while(headB) {
            if (uset.count(headB)) {
                return headB;
            }
            headB = headB->next;
        }
        return NULL;
   }
};
