class RandomizedSet {
public:
    unordered_map<int, int> mp;
    vector<int> v;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val)!=mp.end())
            return false;
        v.push_back(val);
        mp[val]=v.size()-1;
            return true;
    }
    
    bool remove(int val) {
        if(mp.find(val)==mp.end())
            return false;
        int i=mp[val];
        v[i]=v[v.size()-1];
        mp[v[v.size()-1]]=i;
            v.pop_back();
        mp.erase(val);
            return true;
    }
    
    int getRandom() {
        return v[rand()%v.size()];
    }
};
