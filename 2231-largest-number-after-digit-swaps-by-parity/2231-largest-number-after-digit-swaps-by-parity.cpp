class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);
        priority_queue<int> odd,even;
        for(auto x:s){
            int temp = x-'0';
            if(temp%2==0)even.push(temp);
            else odd.push(temp);
        }
        
        for(auto &x:s){
            int temp = x-'0';
            if(temp%2==0) x= even.top()+'0', even.pop();
            else x = odd.top()+'0', odd.pop();
        }
        return stoi(s);
    }
};