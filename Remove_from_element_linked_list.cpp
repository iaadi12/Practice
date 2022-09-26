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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)
            return NULL;
        if(head->val==val)
            head=removeElements(head->next,val);
        else
            head->next=removeElements(head->next,val);
        return head;
    }
};


Solution2-->
  
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *p,*q;
        p=head;
        q=NULL;
        if(!head)
            return NULL;
        while(head!=NULL && head->val==val)
            head=head->next;
        while(p!=NULL)
        {
            q=p;
            p=p->next;
            if(p!=NULL && p->val==val){
                q->next=p->next; 
                p=q;
            }  
        }
        return head;
    }
};

Solution3--->

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)
            return NULL;
        head->next=removeElements(head->next,val);
        if(head->val==val)
            return head->next;
        return head;
    }
};
