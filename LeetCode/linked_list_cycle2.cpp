//Time: 4ms(98.83%), Memory: 7.8MB (89.55%)
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
    ListNode *detectCycle(ListNode *head) {
        ListNode *a=head,*b=head;
        while (b && b->next){
            a=a->next;
            b=b->next->next;
            if(a==b){
                a=head;
                while(a!=b){
                    a=a->next;
                    b=b->next;
                }
                return a;
            }
        }
        return NULL;
    }
};
