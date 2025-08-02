class Solution {
  public:
    int solve(int W,vector<int>& val,vector<int>& wt,int idx){
        if(idx<0) return 0;
        int t=0;
        if(wt[idx]<=W) t=val[idx]+solve(W-wt[idx],val,wt,idx-1);
        int Nt=solve(W,val,wt,idx-1);
        return max(t,Nt);
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        // int idx=val.size()-1;
        // int res=solve(W,val,wt,idx);
        // return res;
        int n=val.size();
        vector<vector<int>>dp(n+1,vector<int>(W+1,0));
        for(int i=1;i<=n;i++){
            for(int j=0;j<=W;j++){
                int Nt=dp[i-1][j];
                int t=0;
                if(wt[i-1]<=j) t=val[i-1]+dp[i-1][j-wt[i-1]];
                dp[i][j]=max(t,Nt);
            }
        }
        return dp[n][W];
    }
};