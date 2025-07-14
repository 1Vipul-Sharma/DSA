//TRY to do it first 
// 46 leetcode
// then its second part


// Using Aditya Verma IP OP method
class Solution {
public:
    void solve(vector<int> ip,vector<int> op,vector<vector<int>>& res){
        if(ip.size()==0){
            res.push_back(op);
            return ;
        }
        for(int i=0;i<ip.size();i++){
            vector<int> op1=op;
            vector<int> ip1=ip;
            op1.push_back(ip1[i]);
            ip1.erase(ip1.begin()+i);
            solve(ip1,op1,res);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        solve(nums,{},res);
        return res;
    }
};

// kind of mixture what i know or i can say the way i used to do problems
// main problem is we have to exclude elements that we encounter in the path that;s why i used set here

class Solution {
public:
    void solve(vector<int>& nums,set<int> isVisited,vector<vector<int>>& res,vector<int> curr){
        if(curr.size()==nums.size()){
            res.push_back(curr);
            return ;
        }
        for(int i=0;i<nums.size();i++){
            if(isVisited.find(nums[i])== isVisited.end()){
                curr.push_back(nums[i]);
                isVisited.insert(nums[i]);
                solve(nums,isVisited,res,curr);
                isVisited.erase(nums[i]);
                curr.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        set<int> isVisited;
        solve(nums,isVisited,res,{});
        return res;
    }
};



// BACKTRACKING mainly kispe focus rakhna h input jo h wo pass by refernece karna h

class Solution {
public:
    void solve(vector<int>& nums,int idx,vector<vector<int>>& res){
        if(idx==nums.size()-1) {
            res.push_back(nums);
            return ;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[i],nums[idx]);
            solve(nums,idx+1,res);
            swap(nums[i],nums[idx]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        solve(nums,0,res);
        return res;
    }
};


// permutation 11 where duplicates are allowed
// unable to do it by myself do itagain 