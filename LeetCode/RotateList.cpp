//Time: 8ms(85.62%), Memory:12.1 MB (19.11%)
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
            return NULL;
        short int total=0;
        ListNode* z = head;
        while(z){
            total++;
            z=z->next;
        }
        if(total==1 || k%total==0){
            return head;
        }
        z=head;
        k = k%total;
        total-=k;
        total--;
        while(total--){
            z=z->next;
        }
        ListNode* y=z->next;
        z->next=NULL;
        z=y;
        while(z->next){
            z=z->next;
        }
        z->next=head;
        return y;
    }
};
