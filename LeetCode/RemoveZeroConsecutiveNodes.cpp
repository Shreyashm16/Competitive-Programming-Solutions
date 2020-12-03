//Time: 12ms (92.67%), Memory: 10.7MB (98.75%)
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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* p=head;
        ListNode* q=head;
        ListNode* t=head;
        int flag=0,sum=0;
        if(head->val==0 && !head->next)
            return NULL;
        while(p || flag>0){
            if(flag>0){
                p=head;
                flag--;
            }
            q=p;
            sum=0;
            while(q){
                sum+=q->val;
                if(sum==0){
                    flag++;
                    if(p==head)
                        head=q->next;
                    else
                        t->next=q->next;
                }
                q=q->next;
            }
            t=p;
            if(p!=NULL)
                p=p->next;    
        }
        return head;
    }
};
