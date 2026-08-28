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
    ListNode *detectCycle(ListNode *head) {
        nn*fast=head;
        nn*slow=head;
        while(fast!=nullptr&&fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)break;
        }
        if(fast==nullptr||fast->next==nullptr)return NULL;
        slow=head;
        while(slow!=fast){
            fast=fast->next;
            slow=slow->next;
        }
        return fast;
    }
};