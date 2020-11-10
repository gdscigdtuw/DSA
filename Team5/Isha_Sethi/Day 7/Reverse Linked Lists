class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* main = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while(main!= NULL)
        {
            next = main->next;
            main->next = prev;
            prev = main;
            main = next;
        }
        return prev;
    }
};
