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
    ListNode* deleteMiddle(ListNode* head) {
        
        // 3 Pointer approach
        
        // if(head->next==NULL)
        //     return NULL;
        // ListNode* slow =head;
        // ListNode* fast = head;
        // ListNode* prev = head;
        // while(fast!=NULL && fast->next!=NULL){
        //     prev=slow;
        //     slow=slow->next;
        //     fast=fast->next->next;
        // }
        // prev->next = prev->next->next;
        // return head;
        
        // Two Pointer approach  TC O(N/2)
        
        if(head->next==NULL)
            return NULL;
        ListNode* slow = head, *fast = head->next->next;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast=fast->next->next;
        }
        slow->next=slow->next->next;
        return head;
        
    }
};