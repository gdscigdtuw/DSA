class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL){
            return false;
        }
        ListNode *fast = head->next;
        ListNode *slow = head;
        while(slow != fast){
            if(fast == NULL || fast->next == NULL){
                return false;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
    }
};
