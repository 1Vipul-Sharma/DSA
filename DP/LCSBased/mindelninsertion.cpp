class Solution {

  public:
    int solve(string& s1,string& s2,int n,int m,vector<vector<int>>& memo){
        if(n==0) return m;
        if(m==0) return n;
        if(memo[n][m]!=-1)return memo[n][m];
        if(s1[n-1]==s2[m-1]) return memo[n][m]=solve(s1,s2,n-1,m-1,memo);
        else{
            int a=1+solve(s1,s2,n,m-1,memo);
            int b=1+solve(s1,s2,n-1,m,memo);
            return memo[n][m]=min(a,b);
        }
    }
    int minOperations(string &s1, string &s2) {
        // Your code goes here
        int n=s1.size(),m=s2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(int i=0;i<=m;i++) dp[0][i]=i;
        for(int i=0;i<=n;i++) dp[i][0]=i;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1];
                else{
                    int a=1+dp[i][j-1];
                    int b=1+dp[i-1][j];
                    dp[i][j]=min(a,b);
                }       
            }
        }
        return dp[n][m];
    }
};