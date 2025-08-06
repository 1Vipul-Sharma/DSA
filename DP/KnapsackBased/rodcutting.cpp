// User function Template for C++

class Solution {
  public:
    int solve(vector<int>& price,int left,vector<int>& memo){
        if(left==0) return 0;
        if(memo[left]!=-1) return memo[left];
        int res=0;
        for(int i=1;i<=price.size();i++){
            if(i<=left){
                res=max(res,price[i-1]+solve(price,left-i,memo));
            }
        }
        return memo[left]=res;
    }
    int cutRod(vector<int> &price) {
        int n=price.size();
        vector<int> dp(n+1,0);
        for(int i=1;i<=n;i++){
            int res=0;
            for(int j=1;j<=n;j++){
                if(j<=i){
                    res=max(res,price[j-1]+dp[i-j]);
                }
            }
            dp[i]=res;
        }
        return dp[n];
    }
};