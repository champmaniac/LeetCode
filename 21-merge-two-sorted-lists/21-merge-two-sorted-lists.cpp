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

class Solution{ // Iterative TC O(N+M) SC O(N+M)
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        ListNode * ans=new ListNode(-1);
        ListNode *tail=ans;
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val <l2->val)
            {
                tail->next=l1;
                tail=l1;
                l1=l1->next;
            }
            else
            {
                tail->next=l2;
                tail=l2;
                l2=l2->next;
            }
        }
        if(l1==NULL) 
            tail->next =l2;
        else 
            tail->next =l1;
        return ans->next;
    }
};
// class Solution { // Recursive TC O(N+M) SC O(N+M)
// public:
//     ListNode* merge(ListNode* l1,ListNode* l2)
//     {
//         if(l1==NULL) return l2;
//         if(l2==NULL) return l1;
//         if(l1->val<l2->val)
//         {
//             l1->next = merge(l1->next,l2);
//             return l1;
//         }
//         else
//         {
//             l2->next = merge(l1,l2->next);
//             return l2;
//         }
//     }
//     ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//         return merge(l1,l2);
//     }
// };