struct Node{
private:
    Node* child[2];
public:
    bool containsKey(int bit){
        return child[bit];
    }
    Node* get(int bit){
        return child[bit];
    }
    void put(int bit, Node* newNode){
        child[bit] = newNode;
    }
};
class Trie{
private:
    Node* root;
public:
    Trie(){
       root = new Node(); 
    }
    void insert(int num){
        Node* node=root;
        for(int i=31;i>=0;i--){
            int bit = (num>>i) &1;
            if(!node->containsKey(bit)){
                node->put(bit,new Node());
            }
            node=node->get(bit);
        }
    }
    int getMax(int num){
        Node* node=root;
        int maxAns=0;
        for(int i=31;i>=0;i--){
            int bit = (num>>i) &1;
            if(node->containsKey(1-bit)){ 
                // if contains the opposite of the bit(which we are actually searching for)
                maxAns = maxAns | (1<<i);
                node=node->get(1-bit);
            }
            else{
                node=node->get(bit);
            }
        }
        return maxAns;
    }
};
class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        Trie* trie = new Trie();
        for(auto &it:nums){
            trie->insert(it);
        }
        int maxi = 0;
        for(auto &it:nums){
            maxi = max(maxi,trie->getMax(it));
        }
        return maxi;
    }
};