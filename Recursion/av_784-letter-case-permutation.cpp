// a1B2 ==> a1b2 , A1b2 ,A1B2 , a1B2  


// just try to solving it using ibh method
// class Solution {
// public:
//     void solve(string &s, int idx, vector<string> &res) {
//         if (idx == 0) {
//             if (isdigit(s[0])) {
//                 res.push_back(string(1, s[0]));
//             } else {
//                 res.push_back(string(1, s[0]));
//                 res.push_back(string(1, toupper(s[0])));
//             }
//             return;
//         }

//         solve(s, idx - 1, res);

//         int n = res.size();
//         for (int i = 0; i < n; i++) {
//             if (isdigit(s[idx])) {
//                 res.push_back(res[i] + s[idx]);
//             } else {
//                 res.push_back(res[i] + s[idx]);
//                 res.push_back(res[i] + char(toupper(s[idx])));
//             }
//         }
//         res.erase(res.begin(), res.begin() + n);
//     }

//     vector<string> letterCasePermutation(string s) {
//         vector<string> res;
//         transform(s.begin(), s.end(), s.begin(), ::tolower);
//         solve(s, s.size() - 1, res);
//         return res;
//     }
// };

// choices + decision wala method

class Solution {
public:
    void solve(string &str,int idx,vector<string>& res,string curr){
        if(idx==str.size()){
            res.push_back(curr);
            return ;
        }
        solve(str,idx+1,res,curr+str[idx]);
        if(isalpha(str[idx])) solve(str,idx+1,res, curr + char(toupper(str[idx])));

    }
    vector<string> letterCasePermutation(string s) {
        string str=s;
        transform(str.begin(),str.end(),str.begin(),::tolower);
        vector<string> res;
        solve(str,0,res,"");
        return res;
    }
};