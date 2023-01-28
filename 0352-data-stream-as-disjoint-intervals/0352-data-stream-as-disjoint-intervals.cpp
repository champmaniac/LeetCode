class SummaryRanges {
private:
    map<int,int>mp;
public:
    SummaryRanges() {
        
    }
    
    void addNum(int value) {
        auto it = mp.lower_bound(value);
        bool merged = false;
        if(it != mp.begin()) {
            auto prev = it;
            --prev;
            if(prev->second + 1 >= value) {
                merged = true;
                prev->second = max(prev->second, value);
            }
        }

        if(it != mp.end()) {
            if(it->first - 1 <= value) {
                if(merged) {
                    auto prev = it;
                    --prev;
                    if(prev->second >= it->first - 1) {
                        prev->second = max(prev->second, it->second);
                        mp.erase(it);
                    }
                } else {
                    merged = true;
                    if(it->first != value) {
                        pair<int, int> p = *it;
                        p.first = min(p.first, value);
                        it = mp.insert(it, p);
                        ++it;
                        if(it != mp.end())
                            mp.erase(it);
                    }
                }
            }
        }
        if(!merged)
            mp.insert(it, {value, value});
    }
    vector<vector<int>> getIntervals() {
        vector<vector<int>> intervals;
        for(auto const & p : mp)
            intervals.push_back({p.first, p.second});
        return intervals;
    }
};


/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */