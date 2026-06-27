class TimeMap {
public:
    unordered_map<string, map<int, string>> timemap;
    int lastTime = 0;
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        timemap[key].insert({timestamp, value});
        lastTime = timestamp;
    }
    
    string get(string key, int timestamp) {
        auto it = timemap[key].upper_bound(timestamp);
        return it == timemap[key].begin() ? "" : prev(it)->second;
    }
};
