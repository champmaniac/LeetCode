class Solution {
public:
    string simplifyPath(string path) {
        int n = path.size(); // n is the length of the path
        string res,temp; // res is the result string and temp is the temp string
        vector<string> st; // st is the stack 
        stringstream ss(path); // ss is the stringstream to read the path 
        while(getline(ss,temp,'/')){ // getline(ss,temp,'/') is to get the string in the path
            if(temp=="" || temp ==".") continue; // if temp is empty or temp is ".", continue
            if(!st.empty() && temp=="..") // if temp is ".." and st is not empty
                st.pop_back(); // pop the top of st 
            else if(temp!="..") // if temp is not ".."
                st.push_back(temp); // push the temp into st
        }
        for(auto s:st){ // for each string in st
            res+="/"+s; // add "/" and s into res
        }
        return st.empty()? "/":res; // if st is empty, return "/" else return res
        
    }
};