// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};


 // } Driver Code Ends
//User function Template for C++

/*Link list node 
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node* reverseBetween(Node* head, int m, int n)
    {
        //code here
        stack<int>st;
        int pos=1;
        Node* dummy=new Node(-1);
        Node* curr=dummy; 
        while(head){
            if(pos<m){
                curr->next=head;
                curr=curr->next;
                head=head->next;
                pos++;
            }
            if(pos>=m && pos<=n){
                 st.push(head->data);
                 head=head->next;
                 pos++;
            }
            else if(pos>n)
            break;
        }
        while(!st.empty()){
            curr->next=new Node(st.top());
            curr=curr->next;
            st.pop();
        }
        while(head){
            curr->next=head;
            curr=curr->next;
            head=head->next;
        }
        return dummy->next;
    }
};

// { Driver Code Starts.

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}



// Driver program to test above functions
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int N, m, n;
		cin >> N>>m>>n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < N; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

		

        Solution ob;

		Node* newhead = ob.reverseBetween(head, m, n);
		printList(newhead);

		cout << "\n";



	}
	return 0;
}
  // } Driver Code Ends