/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
        ListNode *a = headA, *b= headB;
        while(a!=b){
            if(a==NULL) a= headB;
            else a=a->next;
            if(b==NULL) b= headA;
            else b=b->next;
        }
        return a;
    }
};