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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)
            return NULL;
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode *evenFirst = even;

        while(true){
            if (!odd || !even || !(even->next))
        {
            odd->next = evenFirst;
            break;
        }
             odd->next = even->next; //even's next position will be obivously odd and thus will be become next position
            odd = even->next;  // moving odd pointer to next odd position
            if(odd->next==NULL){
                even->next = NULL;
                odd->next = evenFirst; // connecting odd and even LL together
                break;

            }
            even->next = odd->next;
            even = odd->next;

        }

    return head;
    }


};
