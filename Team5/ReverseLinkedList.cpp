class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *current = head, *previous = nullptr;
        while(current != nullptr){
            ListNode *nextnode = current->next;
            current->next = previous;
            previous = current;
            current = nextnode;
        }
        return previous;
    }
};
