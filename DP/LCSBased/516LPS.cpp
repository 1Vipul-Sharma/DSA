class Solution {
public:
    int solve(string& s,int i,int j,vector<vector<int>>& memo){
        if(i>j) return 0;
        if(i==j) return 1;
        if(memo[i][j]!=-1) return memo[i][j];
        if(s[i]==s[j]) return memo[i][j]=2+solve(s,i+1,j-1,memo);
        else {
            int a=solve(s,i+1,j,memo);
            int b=solve(s,i,j-1,memo);
            return memo[i][j]=max(a,b);
        }
    }
    int longestPalindromeSubseq(string s) {
        int i=0,j=s.size()-1;
        int n=s.size()/2;
        vector<vector<int>> memo(n+1,vector<int>(n+1,-1));
        return solve(s,i,j,memo);
    }
};