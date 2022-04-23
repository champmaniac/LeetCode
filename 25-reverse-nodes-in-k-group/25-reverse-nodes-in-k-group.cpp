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
    int lengthOfLL(ListNode* head){
        int len=0;
        while(head!=NULL){
            ++len;
            head=head->next;
        }
        return len;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int length = lengthOfLL(head);
        if(head==NULL || head->next==NULL) return head;
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
        
        ListNode* pre = dummyHead, *cur, *nex;
        while(length>=k){
            cur = pre->next;
            nex = cur->next;
            for(int i=1;i<k;i++){
                cur->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
                nex = cur->next;
            }
            pre = cur;
            length-=k;
        }
        return dummyHead->next;
    }
};