//memory:11.1 MB (54.65%),time: 4ms(85.57%) 
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
    ListNode* removeNthFromEnd(ListNode* head,int n){
        ListNode* h1=head;
        ListNode* h2=head;
        while(n--){
            h1=h1->next;
        }
        if(h1==NULL)
            return head->next;
        while(h1->next!=NULL){
            h1=h1->next;
            h2=h2->next;
        }
        if(h2->next!=NULL)
            h2->next=h2->next->next;
        else
            return h2->next;
        return head;
    }
};
