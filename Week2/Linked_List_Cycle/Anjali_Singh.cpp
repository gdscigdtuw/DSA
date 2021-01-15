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
    bool hasCycle(ListNode *head) {
        ListNode* sp=head,*fp=head;
        if(head==NULL || head->next==NULL){
            return false;
        }
        while (true){
            if (fp==NULL || fp->next==NULL){
                return false;
            }
            sp=sp->next;
            fp=fp->next->next;
            if (sp==fp) break;
        }
        // sp=head;
        // while (true){
        //     sp=sp->next;
        //     fp=fp->next;
        //     if (sp==fp) break;
        // }
        return true;

    }
};
