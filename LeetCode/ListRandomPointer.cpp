Time: 12ms(87.89%), Memory: 11.5 MB (63.99%) 
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* t = new Node(0);
        Node* a=t;
        Node* b=head;
        map<Node*,Node*> m;
        while(head!=NULL){
            Node* temp = new Node(head->val);
            m.insert({head,temp});
            t->next=temp;
            t=t->next;
            head=head->next;
        }
        while(b!=NULL){
            if(b->random!=NULL){
                auto itr1 = m.find(b);
                auto itr2 = m.find(b->random);
                itr1->second->random = itr2->second;
            }
            b=b->next;
        }
        return a->next;
    }
};
