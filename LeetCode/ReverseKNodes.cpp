//Memory: 12MB, Time: 24ms 
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        for(int i=0;i<k;i++){
            if(!temp){
                return head;
            }
            temp=temp->next;
        }
        ListNode* pre=reverseKGroup(temp,k);
        int c=0;
        while(c<k){   
            c++;
            ListNode* n=head->next;
            head->next=pre;
            pre=head;
            head=n;
        }
        return pre;
    }
};
