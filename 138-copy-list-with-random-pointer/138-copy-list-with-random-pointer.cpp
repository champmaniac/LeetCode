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
        unordered_map<Node*,Node*> mp;
        Node* temp = head;
        while(temp!=NULL){
            Node* copy = new Node(temp->val);
            mp[temp] = copy;
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            mp[temp]->next = mp[temp->next];
            mp[temp]->random = mp[temp->random];
            temp = temp->next;
        }
        return mp[head];
    }
};