class Solution {
    struct node{
        char c;
        int ends;
        string word;
        node* child[26];
    };
    // get New Node func
    struct node *getNode(char c){
        node* newNode = new node;
        newNode->c=c;
        newNode->ends=0;
        newNode->word="";
        for(int i=0;i<26;++i){
            newNode->child[i]=NULL;
        }
        return newNode;
    }
    // root
    node * root = getNode('/');
    // insert func
    void insert(string s){
        node* cur = root;
        int index,i=0;
        while(s[i]){
            index = s[i]-'a';
            if(cur->child[index]==NULL){
                cur->child[index] = getNode(s[i]);
            }
            cur=cur->child[index];
            i+=1;
        }
        cur->ends+=1;
        cur->word=s;
    }
    void solve(int row,int col,vector<vector<char>>& board,
    int m,int n,vector<string>&ans,node* curr){
        
        int index = board[row][col]-'a';
        
        if(board[row][col]=='$' || curr->child[index]==NULL) return;
        
        curr=curr->child[index];
        if(curr->ends>0){
            ans.push_back(curr->word);
            curr->ends-=1;
        }
        char ch = board[row][col];
        board[row][col]='$'; // visited
        
        // top
        if(row>0) solve(row-1,col,board,m,n,ans,curr);
        // down
        if(row<m-1) solve(row+1,col,board,m,n,ans,curr);
        // left
        if(col>0) solve(row,col-1,board,m,n,ans,curr);
        // right
        if(col<n-1) solve(row,col+1,board,m,n,ans,curr);
        
        board[row][col]=ch; // unvisited (backtracking)
    }
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        int m = board.size();
        int n = board[0].size();
        
        for(int i=0;i<words.size();i++){
            insert(words[i]);
        }
        vector<string>ans;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                solve(i,j,board,m,n,ans,root);
            }
        }
        return ans;
    }
};