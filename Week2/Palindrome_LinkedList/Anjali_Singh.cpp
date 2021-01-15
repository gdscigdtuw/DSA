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

    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode *temp = reverseList(head);
        ListNode *tempA = head;
        while(tempA!=NULL && temp!=NULL){
            if(temp->val != tempA->val){
                return false;
            }
            cout<<temp->next->val<<" ";
            cout<<tempA->next->val<<" ";
            temp = temp->next;
            tempA = tempA->next;
        }
        return true;
    }

        ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
            return head;
        ListNode *ans = reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return ans;

    }

};
