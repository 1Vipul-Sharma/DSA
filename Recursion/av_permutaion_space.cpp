class Solution {
  public:
    void solve(string &s,int idx,string curr,vector<string> &res){
        if(idx==s.size()){
            res.push_back(curr);
            return ;
        }
        solve(s,idx+1,curr+s[idx],res);
        solve(s,idx+1,curr+" "+s[idx],res);
    }
    vector<string> permutation(string s) {
        // Code Here
        vector<string> res;
        string curr="";
        curr+=s[0];
        solve(s,1,curr,res);
        sort(res.begin(),res.end());
        return res;
    }
};