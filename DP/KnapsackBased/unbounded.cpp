// User function Template for C++

class Solution {
  public:
    int solve(vector<int>& val,vector<int>& wt,int W,int n,vector<vector<int>>& memo){
        if(n==0 || W==0) return 0;
        if(memo[n][W]!=-1) return memo[n][W];
        int t=0;
        if(wt[n-1]<=W) t=val[n-1]+solve(val,wt,W-wt[n-1],n,memo);
        int nt=solve(val,wt,W,n-1,memo);
        return memo[n][W]=max(t,nt);
        
    }
    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        int n=val.size();
        vector<vector<int>> dp(n+1,vector<int>(capacity+1,0));
        for(int i=1;i<=n;i++){
            for(int j=0;j<=capacity;j++){
                int t=0;
                if(wt[i-1]<=j) t=val[i-1]+dp[i][j-wt[i-1]];
                int nt=dp[i-1][j];
                dp[i][j]=max(t,nt);                
            }
        }
        
        return dp[n][capacity];
    }
};