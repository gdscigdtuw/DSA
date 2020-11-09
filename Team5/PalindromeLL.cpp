class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == 0 or head->next == 0)
            return true;
        ListNode *headRoot = head;
        ListNode *reverseList = new ListNode(head->val);
        head = head->next;
        while (head !=0)
        {
            reverseList = new ListNode(head->val, reverseList);
            head = head->next;
        }
        head = headRoot;
        while (head->val == reverseList->val)
        {
            head = head->next;
            reverseList = reverseList->next;
            if (head->next == 0 and reverseList->next == 0)
                return true;
            else if (head->next == 0 or reverseList->next == 0)
                return false;
        }
        return false;
    }
};