class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            if (s[left] != s[right])
                return false;
            left++;
            right--;
        }

        return true;
    }
    void solve(string& s,int idx,vector<vector<string>>& res,vector<string> curr){
        if(idx==s.size()) {
            res.push_back(curr);
            return ;
        }
        for(int i=idx;i<s.size();i++){
            string left=s.substr(idx, i - idx + 1);
            // if pallindrome then call for next 
            if(isPalindrome(left)) {
                curr.push_back(left);
                solve(s,i+1,res,curr);
                curr.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        solve(s,0,res,{});
        return res;
    }
};