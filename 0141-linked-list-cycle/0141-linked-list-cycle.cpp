/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 typedef ListNode nn;
class Solution {
public:
    bool hasCycle(ListNode *head) {
        nn*fast=head;
        nn*slow=head;
        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next;
            fast=fast->next;
            
            slow=slow->next;
            if(fast==slow)return true;
            
        }
        return false;
    }
};