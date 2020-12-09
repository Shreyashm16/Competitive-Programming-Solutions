//Time: 4ms(95.12%), Memory: 10.7MB (52.71%)
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
    ListNode* partition(ListNode* head, int x) {
        ListNode* g= new ListNode();
        ListNode* s=new ListNode();
        ListNode* g1=g;
        ListNode* s1=s;
        ListNode* k=s;
        while(head!=NULL){
            if(head->val>=x){
                g->next=head;
                g=g->next;
            }
            else{
                s->next=head;
                s=s->next;
            }
            head=head->next;
        }
        g->next=NULL;
        s->next=g1->next;
        return k->next;
    }
};
