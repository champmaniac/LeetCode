class MyCalendar {
public:
    unordered_map<int,int> bookings;
    MyCalendar() {

    }
    
    bool book(int s1, int e1) {
        for(auto &[s2,e2]:bookings){
            if(!(s1>=e2 || s2>=e1)) // if any condition satifies then there is surely an intersection
                return false;
        }
        bookings[s1]=e1;
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */