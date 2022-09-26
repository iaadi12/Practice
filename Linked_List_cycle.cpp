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
        struct ListNode *p,*q;
        if(!head)
            return false;
        if(head->next==NULL)
            return false;
        p=q=head;
        do{
            p=p->next;
            q=q->next;
            q=q?q->next:NULL;
        }while((p && q) && (p!=q));
        if(p==q)
            return true;
        return false;
    }
};
