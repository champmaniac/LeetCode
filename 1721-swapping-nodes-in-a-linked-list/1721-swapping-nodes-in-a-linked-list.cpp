class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {       // TC O(N)
        ListNode *n1 = nullptr, *n2 = nullptr; // n1 is the first node of the group, n2 is the last node of the group
        for (auto p = head; p != nullptr; p = p->next) { // for each node in the list
            n2 = n2 == nullptr ? nullptr : n2->next; // n2 is the last node of the group 
            if (--k == 0) { // if k == 0, then we have found the first node of the group
                n1 = p; // n1 is the first node of the group
                n2 = head; // n2 is the last node of the group
            }
        }
        swap(n1->val, n2->val); // swap the first and last node of the group
        return head; // return the head of the list
    }
};