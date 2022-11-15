Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

 

Example 1:


Input: head = [1,2,2,1]
Output: true
Example 2:


Input: head = [1,2]
Output: false
 

Constraints:

The number of nodes in the list is in the range [1, 105].
0 <= Node.val <= 9
  
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
   ListNode* reverseList(ListNode* head) {

       //step 1
        ListNode* prev_p = NULL;
        ListNode* next_p = NULL;
       
       //step 2
        while(head!=NULL) {

            next_p = head->next;
            head->next = prev_p;
            
            prev_p = head;
            head = next_p;
        }
        return prev_p;
    }
    bool isPalindrome(ListNode* head) {
    if(head==NULL||head->next==NULL) return true;
        
    ListNode* slow = head;
    ListNode* fast = head;
        
    while(fast->next!=NULL&&fast->next->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
        
    slow->next = reverseList(slow->next);
    slow = slow->next;
    ListNode* dummy = head;
        
    while(slow!=NULL) {
        if(dummy->val != slow->val) return false;
        dummy = dummy->next;
        slow = slow->next;
    }
    return true;
}
};
