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
    unordered_map<ListNode*,int>m;
    ListNode *detectCycle(ListNode *head) {
        
        while(head!=NULL){
            if(m.count(head))return head;
            m[head]=1;
            head=head->next;
        }
        return NULL;

    }
};