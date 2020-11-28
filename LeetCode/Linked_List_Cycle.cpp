//Time:8 ms(71.79%) Memory:7.9MB(77.33%)
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
    bool hasCycle(ListNode *head) {
        if(head==NULL)
            return false;
        ListNode *a = head->next;
        ListNode *b = head;
        while(a!=NULL && b!=NULL && a->next!=NULL){
            if(a==b)
                return true;
            a = a->next->next;
            b = b->next;
        }
        return false;
    }
};
