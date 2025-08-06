#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    string longestPalindromeSubseq(string& s,int i,int j){
        if(i>j) return "";
        if(i==j) return string(1,s[i]);
        if(s[i]==s[j]) return s[i]+longestPalindromeSubseq(s,i+1,j-1)+s[i];
        else {
            string a=longestPalindromeSubseq(s,i+1,j);
            string b=longestPalindromeSubseq(s,i,j-1);
            return a.size()>b.size()?a:b;
        }
    }
};

int main() {
    Solution sol;
    string s = "bbabcbcab";
    cout << "Longest Palindromic Subsequence : " << sol.longestPalindromeSubseq(s,0,s.size()-1) << endl;
    return 0;
}
