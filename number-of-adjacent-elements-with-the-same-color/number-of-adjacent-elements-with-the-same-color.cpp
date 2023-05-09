class Solution {
public:
    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
        unordered_map<int,int>mp;
        int x=0;
        vector<int>ans;
        for(auto i:queries){
            if(mp.count(i[0]-1) && mp[i[0]-1] ==mp[i[0]])
            x--;
            if(mp.count(i[0]+1) && mp[i[0]+1] ==mp[i[0]])
            x--;
            mp[i[0]] = i[1];
            if(mp.count(i[0]-1) && mp[i[0]-1] == i[1])
            x++;
            if(mp.count(i[0]+1) && mp[i[0]+1] ==i[1])
            x++;
            ans.push_back(x);
        }
        return ans;
    }
};