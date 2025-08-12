class Solution {
  public:
    int MCM(vector<int>& arr,int i,int j,vector<vector<int>>& memo){
        if(i==j) return 0;  
        if(memo[i][j]!=-1) return memo[i][j];
        int mini=INT_MAX;
        for(int k=i;k<j;k++){
            int curr=arr[i-1]*arr[k]*arr[j] +MCM(arr,i,k,memo)+MCM(arr,k+1,j,memo);
            mini=min(curr,mini);
        }
        return memo[i][j]=mini;
    }
    int matrixMultiplication(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<vector<int>> memo(n,vector<int>(n,-1));
        return MCM(arr,1,n-1,memo);
    }
};