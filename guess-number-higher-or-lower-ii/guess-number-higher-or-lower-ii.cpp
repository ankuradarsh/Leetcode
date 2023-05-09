class Solution {
public:
    int getMoneyAmount(int n) {
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return bin (1,n,dp);
    }

    int bin(int left,int right, vector<vector<int>>&dp){
        if(left>=right)
        return 0;

        if(dp[left][right]!=-1)
        return dp[left][right];

        int min_amount = INT_MAX;

        for(int i= left;i<=right;i++){
            int mid =i;
            min_amount = min(min_amount,mid+max(bin(left,mid-1,dp),bin(mid+1,right,dp)));
        }
        return dp[left][right] = min_amount;
    }
};