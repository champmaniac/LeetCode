class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int count = 0;
        for(int i = 0; i <data.size(); i++){
            int ele = data[i];
            if(!count){
                if((ele >> 5) == 0b110) count = 1;
                else if((ele >> 4) == 0b1110) count = 2;
                else if((ele >> 3) == 0b11110) count = 3;
                else if((ele >> 7) != 0) return false;
            } 
            else {
                if((ele >> 6) != 0b10) return false;
                count--;
            }
        }
        return (count == 0);
    }
};