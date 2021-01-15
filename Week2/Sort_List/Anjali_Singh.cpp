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
    ListNode* MergeList(ListNode* hd1, ListNode* hd2){
        if (hd1==NULL && hd2==NULL) return NULL;
        if (hd1==NULL) return hd2;
        if (hd2==NULL) return hd1;
        if (hd1->val<hd2->val){
            ///Node* nh=hd1;
            hd1->next=MergeList(hd1->next,hd2);
            return hd1;
        } else {
            hd2->next=MergeList(hd1,hd2->next);
            return hd2;
        }
    }

    ListNode* MidSplit(ListNode* hd){
        if (hd==NULL||hd->next==NULL) return hd;
        ListNode* fp=hd, *sp=hd;
        while (fp->next!=NULL&&fp->next->next!=NULL){
            sp=sp->next;
            fp=fp->next->next;
        }
        ListNode* nh=sp->next;
        sp->next=NULL;
        return nh;
    }
    ListNode* sortList(ListNode* head) {
        if (head==NULL||head->next==NULL) return head;
        ListNode* nh=MidSplit(head);
        head=sortList(head);
        nh=sortList(nh);
        return MergeList(head, nh);

    }
};
