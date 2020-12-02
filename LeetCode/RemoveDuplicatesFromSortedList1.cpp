//Time: 8ms(98.49%), Memory: 11.9 MB(85.51%)
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)
            return NULL;
        ListNode* x = head;
        ListNode* y = head;
        while(y){
            if(y->val != x->val){
                x->next = y;
                x=y;
            }
            y=y->next;
        }
        x->next = NULL;
        return head;
    }
};
