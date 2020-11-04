Problem: https://leetcode.com/problems/linked-list-cycle/

Solution:

 bool hasCycle(ListNode *head) {
    if(head == NULL || head->next == NULL) { 
        return false; 
    }
    struct ListNode * walker = new ListNode(1);
    struct ListNode * runner = new ListNode(2);
    walker = head;
    runner = walker->next;
    while(walker != runner){
        if(runner == NULL || runner->next == NULL) { 
            return false; 
        }
        walker = walker->next;
        runner = runner->next->next;
    }
    return true;
    }
