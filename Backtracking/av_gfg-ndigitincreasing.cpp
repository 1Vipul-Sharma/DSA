// n=2

// 12 13 14 15 16 17 18 19 
// 23 24 25 26 27 28 29 
// 34 35 36 37 38 39 
// 45 46 47 48 49
// 56 57 58 59 
// 67 68 69
// 78 79 
// 89


// User function Template for C++
class Solution {
  public:
    void solve(vector<int>& res,int n,int num,int idx){
        if(n==0) {
            res.push_back(num);
            return;
        }
        for(int i=idx+1;i<=9;i++){
            solve(res,n-1,num*10+i,i);
        }
    }
    vector<int> increasingNumbers(int n) {
        // Write Your Code here
        if(n==1) return {0,1,2,3,4,5,6,7,8,9};
        vector<int> res;
        solve(res,n,0,0);
        return res;
    }
};