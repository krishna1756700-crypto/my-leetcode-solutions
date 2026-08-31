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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int mindist=INT_MAX;
        int maxdist=-1;
        int prev=-1;
        int count=0;
        int count2=0;
        bool tempp=true;
        nn*temp=head;
        while(temp->next!=nullptr){
            count++;
            count2++;
            if(prev!=-1){
                int nex=temp->next->val;
                if((prev>temp->val&&nex>temp->val)||(prev<temp->val&&nex<temp->val)){
                    if(tempp){
                        count=0;
                        count2=0;
                        tempp=false;
                    }
                    else{
                        if(count<mindist)mindist=count;
                        if(count2>maxdist)maxdist=count2;
                        count=0;
                    }
                }
            }
            prev=temp->val;
            temp=temp->next;
        }
        if(mindist==INT_MAX)mindist=-1;
        return {mindist,maxdist};
    }
};