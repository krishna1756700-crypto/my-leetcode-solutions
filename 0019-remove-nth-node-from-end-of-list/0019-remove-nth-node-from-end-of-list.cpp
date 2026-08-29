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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        nn*t1=head;
        int x=n;
        while(x--){
            t1=t1->next;
        }
        if(t1==nullptr)return head->next;
        nn*t2=head;
        while(t1->next!=nullptr){
            t1=t1->next;
            t2=t2->next;
        }
        if(n==1)t2->next=nullptr;
        else{
            t2->next=t2->next->next;
        }
        return head;
    }
};