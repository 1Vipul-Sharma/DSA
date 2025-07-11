// IBH
// User function template for C++
// class Solution {
//   public:
//     void solve(int n,vector<string>& res){
//         if(n==1) {
//             res.push_back(string(1,'1'));
//             return ;
//         }    
//         solve(n-1,res);
//         int size=res.size();
//         for(int i=0;i<size;i++){
//             res.push_back(res[i]+'1');
//             int count_ones = std::count(res[i].begin(), res[i].end(), '1');
//             int count_zeroes= res[i].size()-count_ones;
//             if(count_ones > count_zeroes)
//                 res.push_back(res[i]+'0');
//         }
//         res.erase(res.begin(), res.begin() + size);
//     }
//     vector<string> NBitBinary(int n) {
//         // Your code goes here
//         vector<string> res;
//         solve(n,res);
//         return res;
//     }
// };


// choices + decision tree approach

// User function template for C++
class Solution {
  public:
    void solve(int n,string curr,vector<string>& res,int count_ones,int count_zeroes){
        if(n==0) {
            res.push_back(curr);
            return ;
        }
        solve(n-1,curr+'1',res,count_ones+1,count_zeroes);
        if(count_ones>count_zeroes)
            solve(n-1,curr+'0',res,count_ones,count_zeroes+1);
        
    }
    vector<string> NBitBinary(int n) {
        // Your code goes here
        vector<string> res;
        solve(n,"",res,0,0);
        return res;
    }
};