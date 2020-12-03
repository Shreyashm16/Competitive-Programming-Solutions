//Time: 12ms (95.46%), Memory: 8MB (57.64%)
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
    void deleteNode(ListNode* node){
        ListNode* temp=node;
        node=node->next;
        temp->val=node->val;
        temp->next=node->next;
    }
};
