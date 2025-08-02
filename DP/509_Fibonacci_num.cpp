//Plain Recursive
int nthFibonacci(int n){
    if (n <= 1){
        return n;
    }
    return nthFibonacci(n - 1) + nthFibonacci(n - 2);
}

//Memoziation (Top Down)
int nthFibonacciUtil(int n, vector<int>& memo) {
    if (n <= 1) {
        return n;
    }
    if (memo[n] != -1) {
        return memo[n];
    }
    memo[n] = nthFibonacciUtil(n - 1, memo) 
                       + nthFibonacciUtil(n - 2, memo);

    return memo[n];
}

int nthFibonacci(int n) {
    vector<int> memo(n + 1, -1);
    return nthFibonacciUtil(n, memo);
}


//Tabulation (Bottom Up)

int nthFibonacci(int n){
    if (n <= 1)
        return n;

    vector<int> dp(n + 1);

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; ++i){
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}