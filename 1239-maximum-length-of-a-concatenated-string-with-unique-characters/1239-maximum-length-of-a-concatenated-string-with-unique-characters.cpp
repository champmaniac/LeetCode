class Solution {
public:
    int len{0};
    int maxLength(vector<string>& arr) {
        checklen("",arr,0);
        return len;
    }
    void checklen(string str,vector<string>&arr,int it){
        if(!isUnique(str)) return;
        if(str.size()>len) len = str.size();
        for(int i=it;i<arr.size();i++){
            checklen(str+arr[i],arr,i+1);
        }
    }
    bool isUnique(string word){
        unordered_set<char> st;
        for(auto ele:word){
            if(st.find(ele)==st.end()){
                st.insert(ele);
            }
            else return false;
        }
        return true;
    }
};