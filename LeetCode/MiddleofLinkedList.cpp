//Time: 0ms (100%), Memory: 7.1MB (34.58%)
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
    ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode* p=head;
        while(p!=NULL){
            count=count+1;
            p=p->next;
        }
        count>>=1;
        while(count--){
            head=head->next;
        }
        return head;
    }
};
