//Time: 20ms (99.79%), Memory: 15.5MB (46.76%)
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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL && head->val==val)
            head=head->next;
        if(head==NULL)
            return NULL;
        ListNode* p=head;
        ListNode* q=head->next;
        while(q!=NULL){
            if(q->val==val)
                p->next=q->next;
            else
                p=q;
            q=q->next;
        }
        return head;
    }
};
