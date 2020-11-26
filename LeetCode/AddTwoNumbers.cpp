//memory:71.5 MB (19%),time: 32ms(79.64%) 
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l = new ListNode((l1->val + l2->val)%10);
        ListNode* lret=l;
        //l->val=(l1->val + l2->val)%10;
        int x=(l1->val + l2->val)/10;
        l1=l1->next;
        l2=l2->next;
        while(l1!=NULL && l2!=NULL){
            ListNode* lt = new ListNode((x + l1->val + l2->val)%10);
            x=(x + l1->val + l2->val)/10;
            l->next=lt;
            l=l->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
           ListNode* lt = new ListNode((x + l1->val)%10);
            x=(x + l1->val)/10;
            l->next=lt;
            l=l->next;
            l1=l1->next; 
        }
        while(l2!=NULL){
           ListNode* lt = new ListNode((x + l2->val)%10);
            x=(x + l2->val)/10;
            //cout << lt->val << endl;
            l->next=lt;
            l=l->next;
            l2=l2->next; 
        }
        while(x!=0){
            ListNode* lt = new ListNode((x)%10);
            x=(x)/10;
            l->next=lt;
            l=l->next;
        }
        return lret;
    }
};
