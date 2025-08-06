string printLCS(string& s1,string& s2,int n,int m,vector<vector<string>>& memo){
	if(n==0||m==0) return "";
	if(memo[n][m]!="") return memo[n][m];
	if(s1[n-1]==s2[m-1]) return memo[n][m]=printLCS(s1,s2,n-1,m-1,memo)+s1[n-1];
	else{
		string a=printLCS(s1,s2,n-1,m,memo);
		string b=printLCS(s1,s2,n,m-1,memo);
		return memo[n][m]=a.size()>b.size()?a:b;
	}	
}
string findLCS(int n, int m,string &s1, string &s2){
	// Write your code here.
	vector<vector<string>> dp(n+1,vector<string>(m+1,""));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(s1[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1]+s1[i-1];
			else{
				string a=dp[i-1][j];
				string b=dp[i][j-1];
				dp[i][j]=a.size()>b.size()?a:b;
			}		
		}
	}
	return dp[n][m];
}

=================================================================================

string findLCS(int n, int m, string &s1, string &s2) {
	vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
	
	// Fill the DP table
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			if(s1[i - 1] == s2[j - 1])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	
	// Trace back to get LCS
	int i = n, j = m;
	string res = "";
	while(i > 0 && j > 0) {
		if(s1[i - 1] == s2[j - 1]) {
			res += s1[i - 1];
			i--; j--;
		}
		else if(dp[i - 1][j] > dp[i][j - 1]) {
			i--;
		}
		else {
			j--;
		}
	}
	
	reverse(res.begin(), res.end());
	return res;
}
