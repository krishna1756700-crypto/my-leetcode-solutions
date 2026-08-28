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
 typedef ListNode nn;
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr||head->next==nullptr)return head;
        nn*x=head;
        nn*y=head->next;
        nn*b=head->next;
        while(x->next->next!=nullptr){
            x->next=x->next->next;
            x=x->next;
            if(y->next->next==nullptr)break;
            y->next=y->next->next;
            y=y->next;
        }
        x->next=b;
        y->next=nullptr;
        return head;
    }
};