class Solution {
public:
    void solve(string& s,unordered_set<string>& set,int idx,bool& res){
        if(idx==s.size()){
            res=true;
            return;
        }
        string temp="";
        for(int i=idx;i<s.size();i++){
            temp+=s[i];
            if(set.find(temp)!=set.end()){
                solve(s,set,i+1,res);
            }
        }
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        bool res=false;
        unordered_set<string> set(wordDict.begin(),wordDict.end());
        solve(s,set,0,res);
        return res;
    }
};