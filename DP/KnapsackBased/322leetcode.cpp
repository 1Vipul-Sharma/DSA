class Solution {
public:
    int solve(vector<int>& coins,int amount,int n){
        if(amount==0) return 0;
        if(n==0) return INT_MAX;
        int t=INT_MAX;
        if(coins[n-1]<=amount) {
            t=solve(coins,amount-coins[n-1],n);
            if(t!=INT_MAX) t++;
        }
        int nt=solve(coins,amount,n-1);
        return min(t,nt);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        dp[0][0]=0;
        for(int i=1;i<=amount;i++) dp[0][i]=INT_MAX;
        for(int i=1;i<=n;i++){
            for(int j=0;j<=amount;j++){
                int t=INT_MAX;
                if(coins[i-1]<=j) {
                    t=dp[i][j-coins[i-1]];
                    if(t!=INT_MAX) t++;
                }
                int nt=dp[i-1][j];
                dp[i][j]=min(t,nt);
            }
        }
        return dp[n][amount]==INT_MAX?-1:dp[n][amount];
    }
};