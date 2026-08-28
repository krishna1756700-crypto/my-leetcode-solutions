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
    nn*ans=head;
    if(ans==fast)return ans;


    while(ans!=nullptr){
        nn*temp=fast->next;
        while(temp!=fast){
            if(ans==temp)return ans;
            temp=temp->next;
        }
        if(ans==temp)return ans;
        ans=ans->next;
    }
    return NULL;
    }
};