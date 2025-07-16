class Solution {
public:
    void solve(vector<string>& map,vector<string>& res,string& digits,int idx,string curr){
        if(idx==digits.size()) {
            res.push_back(curr);
            return ;
        }
        string temp=map[digits[idx]-'0'];
        for(auto& ch:temp){
            solve(map,res,digits,idx+1,curr+ch);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> map={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wyxz"};
        if(digits.size()==0) return {};
        vector<string> res;
        solve(map,res,digits,0,"");
        return res;   
    }
};