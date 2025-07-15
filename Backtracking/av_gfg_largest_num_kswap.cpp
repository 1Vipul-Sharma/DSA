

class Solution {
  public:
    // Function to find the largest number after k swaps.
    void solve(string& s,int k,int idx,string& res){
        if(k==0 || idx==s.size()){
            res=max(res,s);
            return ;
        } 
        char maxChar = *max_element(s.begin()+idx, s.end());
        bool flag=true;
        for(int i=idx+1;i<s.size();i++){
            if(s[idx]<s[i] && s[i]==maxChar){
                flag=false;
                swap(s[idx],s[i]);
                solve(s,k-1,idx+1,res);
                swap(s[idx],s[i]);
            }
        }
        if(flag) solve(s,k,idx+1,res);
    
    }
    string findMaximumNum(string& s, int k) {
        // code here.
        string res=s;
        solve(s,k,0,res);
        return res;
    }
};