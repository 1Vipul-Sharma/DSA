class Solution {
  public:
    bool solve(vector<int>& arr,int n,int sum,vector<vector<int>>& memo){
        if(sum==0) return true;
        if(n==0) return false;
        if(memo[n][sum]!=-1) return memo[n][sum];
        int t=false;
        if(arr[n-1]<= sum) t=solve(arr,n-1,sum-arr[n-1],memo);
        int nt=solve(arr,n-1,sum,memo);
        return memo[n][sum]=t||nt;
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
    int n = arr.size();
    vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));
    
    for (int i = 0; i <= n; i++) {
        dp[i][0] = true;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            bool notTake = dp[i - 1][j];
            bool take = false;
            if (arr[i - 1] <= j) {
                take = dp[i - 1][j - arr[i - 1]];
            }
            dp[i][j] = take || notTake;
        }
    }

    return dp[n][sum];
}

};