class Solution {
public:
vector<vector<int>>grids;
int n,m,cnt,vis[11][11];

bool valid(int x,int y){
    if(x>=0 && x<n && y>=0 && y<m  && !vis[x][y] && grids[x][y])
    return true;
    else
    return false;
}
void dfs(int x,int y){
    if(valid(x,y)){
        vis[x][y] =1;
        cnt+=grids[x][y];
        dfs(x,y+1);
        dfs(x,y-1);
        dfs(x+1,y);
        dfs(x-1,y);
    }
}
    int findMaxFish(vector<vector<int>>& grid) {
          n = grid.size();
          m = grid[0].size();
        grids = grid;
        int ans =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]){
                    cnt =0;
                    dfs(i,j);
                    ans = max(ans,cnt);
                }
            }
        }
        return ans;
    }
};