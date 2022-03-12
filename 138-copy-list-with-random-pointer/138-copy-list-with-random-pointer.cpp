class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*,Node*>mp; 
        int i=0;
        Node* ptr = head; // ptr is the pointer of the original list
        while(ptr) // loop through the original list
        {
            mp[ptr] = new Node(ptr->val); // create a new node with the same value
            ptr = ptr->next; // move to the next node
        }
        ptr=head; // reset ptr to the head of the original list
        while(ptr) // loop through the original list
        {
            mp[ptr]->next = mp[ptr->next]; // set the next pointer of the new node to the next node of the original node
            mp[ptr]->random = mp[ptr->random]; // set the random pointer of the new node to the random node of the original node
            ptr = ptr->next; // move to the next node
        }
        return mp[head]; // return the head of the new list
    }
};