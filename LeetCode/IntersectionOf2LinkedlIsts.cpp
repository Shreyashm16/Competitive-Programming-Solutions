//Time: 36ms (95.14%), Memory: 14.8MB (84.60%)
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL) 
            return NULL;
        ListNode* p = headA;
        ListNode* q = headB;
        while(p!=q){
            p= p==NULL ? headB : p->next;
            q= q==NULL ? headA : q->next;
        }
        return q;
    }
};
