//memory:13.8 MB (58.30%),time: 24ms(97.85%) 
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)
            return NULL;
        return mergeKLists(lists,0,lists.size()-1);
    }
    ListNode* mergeKLists(vector<ListNode*>& lists, int start, int end){
        if(end==start)
            return lists[start];
        else if(end==start+1){
            return merge(lists[start],lists[end]);
        }
        int mid = start+(end-start)/2;
        ListNode* a = mergeKLists(lists,start,mid);
        ListNode* b = mergeKLists(lists,mid+1,end);
        return merge(a,b);
    }
    ListNode* merge(ListNode* a,ListNode* b){
        if (!a) 
            return b;
        if (!b) 
            return a;
        if (a->val < b->val) {
            a->next = merge(a->next, b);
            return a;
        } 
        else {
            b->next = merge(a, b->next);
            return b;
        } 
    }
};
