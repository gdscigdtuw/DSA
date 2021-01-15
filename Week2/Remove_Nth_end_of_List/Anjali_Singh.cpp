/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* first = head;
        ListNode* second = head;
        while(second->next!=NULL){
            if(n>0){
                second = second->next;
                n--;
            }
            else{
                first = first->next;
                second = second->next;
            }
        }
        if(n==0){
            first->next = first->next->next;
        }
        else{
            head=head->next;
        }

        return head;

    }
};
