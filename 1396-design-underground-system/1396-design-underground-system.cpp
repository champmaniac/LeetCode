class UndergroundSystem {
public:
    unordered_map<string,pair<int,int>> checkOutmap; // Route - {TotalTime, Count}
    unordered_map<int,pair<string,int>> checkInmap;  // Uid - {StationName, Time}
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        checkInmap[id]={stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto &checkIn=checkInmap[id];
        string route=checkIn.first+"_"+stationName;
        checkOutmap[route].first+=t-checkIn.second;
        checkOutmap[route].second+=1;
    }
    
    double getAverageTime(string startStation, string endStation) {
        string route=startStation+"_"+endStation;
        auto &checkOut=checkOutmap[route];
        return (double) checkOut.first/checkOut.second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */