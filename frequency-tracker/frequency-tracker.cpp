class FrequencyTracker {
public:
unordered_map<int,int>mp1,mp2;
    FrequencyTracker() {
        
    }
    
    void add(int x) {
        if(mp2[mp1[x]]>0){
            mp2[mp1[x]]--;
        }
        ++mp1[x];
        mp2[mp1[x]]++;
    }
    
    void deleteOne(int x) {
        if(mp1[x]>0){
            mp2[mp1[x]]--;
            mp1[x]--;
            mp2[mp1[x]]++;
        }
    }
    
    bool hasFrequency(int f) {
        return mp2[f]>0;
    }
};

/**
 * Your FrequencyTracker object will be instantiated and called as such:
 * FrequencyTracker* obj = new FrequencyTracker();
 * obj->add(number);
 * obj->deleteOne(number);
 * bool param_3 = obj->hasFrequency(frequency);
 */