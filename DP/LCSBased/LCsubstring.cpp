class Solution {
  public:
    int solve(string& s1, string& s2, int n1, int n2, vector<vector<int>>& dp, int& res) {
        if (n1 < 0 || n2 < 0) return 0;

        if (dp[n1][n2] != -1) return dp[n1][n2];

        int curr = 0;

        if (s1[n1] == s2[n2]) {
            curr = 1 + solve(s1, s2, n1 - 1, n2 - 1, dp, res);
            res = max(res, curr);  // update result
        }

        // We also explore non-matching cases without updating `curr`
        solve(s1, s2, n1 - 1, n2, dp, res);
        solve(s1, s2, n1, n2 - 1, dp, res);

        return dp[n1][n2] = curr;
    }

    int longestCommonSubstr(string& s1, string& s2) {
        int n = s1.size();
        int m = s2.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        int res = 0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]) {
                    dp[i][j]=1+dp[i-1][j-1];
                    res=max(dp[i][j],res);
                }
                else {
                    dp[i][j]=0;
                }
            }
        }
        return res;
    }
};
