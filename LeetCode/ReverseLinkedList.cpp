//Time: 4ms (97.96%),Memory: 8.7MB (50.03%)
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
    ListNode* reverseList(ListNode* head) {
        ListNode* p=NULL;
        ListNode* q=head;
        while(q!=NULL){
            ListNode* temp=q->next;
            q->next=p;
            p=q;
            q=temp;
        }
        return p;
    }
};
