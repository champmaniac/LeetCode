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
    ListNode* reverse(ListNode* &head){
        if(head==NULL || head->next==NULL) return head;
        ListNode* newNode = reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return newNode;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode* slow=head, *fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = reverse(slow->next);
        slow = slow->next;
        ListNode* dummy = head;
        while(slow!=NULL){
            if(dummy->val!=slow->val) return false;
            dummy=dummy->next;
            slow=slow->next;
        }
        return true;
    }
};