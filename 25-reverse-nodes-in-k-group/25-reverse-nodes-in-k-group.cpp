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
        int length = 0;
        ListNode* cur = head;
        while(cur!=NULL){
            length++;
            cur=cur->next;
        }
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* prev = dummy,*curr=dummy,*nex=dummy;
        while(length>=k){
            curr=prev->next;
            nex=curr->next;
            
            for(int i=1;i<k;i++){
                curr->next = nex->next;
                nex->next = prev->next;
                prev->next =nex;
                nex=curr->next;
            }
            prev=curr;
            length-=k;
        }
        return dummy->next;
    }
};