/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution { // BFS APPROACH
public:
    unordered_map<Node*,Node*> mp;
    Node* cloneGraph(Node* node) {
        if(node==NULL) return NULL;
        queue<Node*> q;
        Node* first = new Node(node->val,{}); 
        mp[node]=first;
        q.push(node);
        while(!q.empty()){
            auto cur = q.front();
            q.pop();
            
            for(auto adj:cur->neighbors){
                if(mp.find(adj)==mp.end()){ // node not present in map
                    mp[adj] = new Node(adj->val,{});
                    q.push(adj);
                }
                mp[cur]->neighbors.push_back(mp[adj]);
            }
        }
        return mp[node];
    }
};

// class Solution { // DFS APPROACH
// public:
//     unordered_map<Node*,Node*> mp;
//     Node* cloneGraph(Node* node) {
//         if(node==NULL) return NULL;
//         if(mp.find(node)==mp.end()){ // node not present in map
//             mp[node]= new Node(node->val,{}); // making a copy
//             for(auto adj:node->neighbors){ // travel to it's adjacent
//                 mp[node]->neighbors.push_back(cloneGraph(adj)); // add the copy
//             }
//         }
//         return mp[node]; // return the deep copy(clone) of the graph
//     }
// };