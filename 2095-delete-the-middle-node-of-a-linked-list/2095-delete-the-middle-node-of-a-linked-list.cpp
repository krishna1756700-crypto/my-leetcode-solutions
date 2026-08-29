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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==nullptr)return nullptr;
        nn*t1=head;
        nn*t2=head;
        while(t2->next->next!=nullptr&&t2->next->next->next!=nullptr){
            t2=t2->next->next;
            t1=t1->next;
        }
        t1->next=t1->next->next;
        return head;
    }
};