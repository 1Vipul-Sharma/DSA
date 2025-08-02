// partition-equal-subset-sum
class Solution {
public:
    bool solve(vector<int>& nums,int n,int target){
        if(target==0) return true;
        if(n==0) return false;
        int t=false;
        if(nums[n-1]<=target) t=solve(nums,n-1,target-nums[n-1]);
        int nt=solve(nums,n-1,target);
        return t||nt;
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%2) return false;
        int req=sum/2;
        vector<vector<int>>dp(n+1,vector<int>(req+1,false));
        dp[0][0]=true;
        for(int i=1;i<=n;i++){
            for(int j=0;j<=req;j++){
                int t=false;
                if(nums[i-1]<=j) t=dp[i-1][j-nums[i-1]];
                int nt=dp[i-1][j];
                dp[i][j]=t||nt;
            }
        }
        return dp[n][req];
    }
};