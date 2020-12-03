//Time: 36ms (96.76%), Memory: 32.5MB (47.45%)
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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSubPath(ListNode* head, TreeNode* root){
        if(!head)
            return true;
        if(!root)
            return false;
        return (isStartPath(head,root) || isSubPath(head,root->left) || isSubPath(head,root->right));
    }
    bool isStartPath(ListNode* head, TreeNode* root) {
        if(!head)
            return true;
        if(!root)
            return false;
        return (head->val==root->val) && (isStartPath(head->next,root->left) || isStartPath(head->next, root->right));
    }
};
