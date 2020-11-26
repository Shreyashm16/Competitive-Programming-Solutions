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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){
        ListNode* sorted = new ListNode();
        ListNode* tx=sorted;
        while(l1!=NULL && l2!=NULL){
            ListNode* t = new ListNode();
            if(l1->val<l2->val){
                t->val=l1->val;
                l1=l1->next;
            }
            else{
                t->val=l2->val;
                l2=l2->next; 
            }
            sorted->next=t;
            sorted=sorted->next;
        }
        while(l1!=NULL){
            ListNode* t = new ListNode(l1->val);
            l1=l1->next;
            sorted->next=t;
            sorted=sorted->next;
        }
        while(l2!=NULL){
            ListNode* t = new ListNode(l2->val);
            l2=l2->next;
            sorted->next=t;
            sorted=sorted->next;
        }
        tx=tx->next;
        return tx;
    }
};
