//Time: 16ms(73.73%),Memory: 10.9 MB(48.62%)
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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next)
            return head;
        ListNode* p=head;
        ListNode* q=head->next;
        ListNode* r=p;
        ListNode* s=q;
        head=head->next->next;
        int len=3;
        while(head){
            if(len%2==1){
                p->next=head;
                p=p->next;
            }
            else{
                q->next=head;
                q=q->next;
            }
            head=head->next;
            len++;
        }
        p->next=s;
        q->next=NULL;
        return r;
    }
};
