class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int>v;
        vector<string>v1;

        for(int i=0;i<n;i++){
            v1.push_back(to_string(i+1));
        }
        sort(v1.begin(),v1.end());
        for(int i=0;i<v1.size();i++){
            v.push_back(stoi(v1[i]));
        }
        return v;
    }
};