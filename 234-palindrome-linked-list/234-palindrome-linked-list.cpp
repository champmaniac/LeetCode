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
    ListNode* findMid(ListNode* head){
        ListNode* slow = head ,*fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow =slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* reverseList(ListNode* head){
        ListNode* nextNode, *prevNode=NULL,*curr=head;
        while(curr!=NULL){
            nextNode = curr->next;
            curr->next= prevNode;
            prevNode = curr;
            curr = nextNode;
        }
        return prevNode;
    }
    bool compareList(ListNode* l1, ListNode* l2){
        while(l1!=NULL && l2!=NULL) {
            if(l1->val!=l2->val) return false;
            l1=l1->next;
            l2=l2->next;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode* h = head;
        ListNode* mid = findMid(h);
        ListNode* h2 = reverseList(mid);
        return compareList(head,h2);
    }
};