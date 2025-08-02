//Coin change 2

class Solution {
public:
    int solve(vector<int>& coins,int amount,int n){
        if(amount==0) return 1;
        if(n==0) return 0;
        int res=0;
        if(coins[n-1]<=amount)  res+=solve(coins,amount-coins[n-1],n);
        res+=solve(coins,amount,n-1);
        return res;
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<unsigned long long>> dp(n + 1, vector<unsigned long long>(amount + 1, 0));
        dp[0][0] = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= amount; j++) {
                unsigned long long t = 0;
                if (coins[i - 1] <= j) t = dp[i][j - coins[i - 1]];
                unsigned long long nt = dp[i - 1][j];
                dp[i][j] = t + nt;

            }
        }
        return (int)dp[n][amount];
    }

};