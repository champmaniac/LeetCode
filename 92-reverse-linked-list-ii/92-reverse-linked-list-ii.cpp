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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> v;
        ListNode *p = head;
        while(p!=NULL){
            v.push_back(p->val);
            p=p->next;
        }
        p=head;
        for(int i=0;i<left-1;i++){
            p=p->next;
        }
        for(int i=right;i>=left;i--){
            p->val=v[i-1];
            p=p->next;
        }
        return head;
    }
};