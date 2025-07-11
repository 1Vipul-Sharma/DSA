// literally release a lot of dopamine after solving this cause of the way my mind work while solving this.


// so first i try to solve it using IBH 
// but suppose for n=3 i get ccorrect answer for n=2 now for 3rd there is lot many options like i can add in start in b/w at last.
// so i drooped the idea of using IBH


// now come to the choices => decision method 
// for a place i have 2 choices either ( or ) 
// now i just have to think of a condition that will give me the char that i can use at current place .


class Solution {
public:
    void solve(vector<string> &res,int open,int close,string curr){
        if(open==0 && close==0){
            res.push_back(curr);
            return;
        }
        if(open==0){
            res.push_back(curr+string(close,')'));
            return;
        }
        solve(res,open-1,close,curr+'(');
        if(open<close) solve(res,open,close-1,curr+')');
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        solve(res,n,n,"");
        return res;
    }
};