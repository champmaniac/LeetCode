// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


 // } Driver Code Ends
/*
// node structure:

struct Node
{
    int data;
    Node* left;
    Node* right;
};

*/

class Solution{
   unordered_map<Node*,Node*>Map;
   unordered_map<Node*, bool>vis;
   Node* node;
   int sum = 0;
public:
   void getTargetNode(Node* p,Node* root,int t){
       if(!root) return;
       
       Map[root] = p;
       if(root->data == t){
           node = root;
           return;
       }
       
       getTargetNode(root,root->left, t);
       getTargetNode(root,root->right,t);
       
       return;
   }
   void getTheSumofAllKthNode(Node* root,int k){
       if(!root || k < 0) return;
       if(vis.find(root) != vis.end()) return;
       
       vis[root] = true;
       sum += root->data;
       
       getTheSumofAllKthNode(Map[root] ,k-1);
       getTheSumofAllKthNode(root->left,k-1);
       getTheSumofAllKthNode(root->right,k-1);
       
       return;
   }
   int sum_at_distK(Node* root, int t, int k)
   {
       getTargetNode(NULL,root,t);
       getTheSumofAllKthNode(node,k);
       return sum;
   }
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    getchar();
    
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        
        int target,k;
        cin>> target >> k;
        getchar();
        
        Solution ob;
        cout<< ob.sum_at_distK(root,target,k) << endl;
    }
	return 0;
}

  // } Driver Code Ends