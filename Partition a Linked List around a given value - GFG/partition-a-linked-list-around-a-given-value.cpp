// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node* partition(struct Node* head, int x);

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
int main(void) {
    int t;
    cin >> t;

    while (t--) {
        struct Node* head = NULL;
        struct Node* temp = NULL;
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int value;
            cin >> value;
            if (i == 0) {
                head = new Node(value);
                temp = head;
            } else {
                temp->next = new Node(value);
                temp = temp->next;
            }
        }

        int k;
        cin >> k;

        // Solution ob;

        head = partition(head, k);
        printList(head);
    }

    return (0);
}
// } Driver Code Ends


// User function Template for C++

/*struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

struct Node* partition(struct Node* head, int x) {
    // code here
    Node *l = new Node(0), *m = new Node(0), *r = new Node(0);
    Node *curr = head, *cl = l, *cm = m, *cr = r;
    while(curr != NULL) {
        if(curr->data < x) {
            cl -> next = curr;
            cl = cl -> next;
        } else if(curr->data > x) {
            cr -> next = curr;
            cr = cr->next;
        } else if(curr->data == x) {
            cm -> next = curr;
            cm = cm->next;
        }
        curr = curr->next;
    }
    cr -> next = NULL;
    cm -> next = r -> next;
    cl -> next = m -> next;
    return l->next;
}