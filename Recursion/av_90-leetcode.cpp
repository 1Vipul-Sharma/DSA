// The solution set must not contain duplicate subsets.

// bas wohi h vecctor ko set me dallenge that will automatically take care of duplicates.

class Solution {
public:
    void solve(vector<int>& nums,int idx,vector<int> temp,set<vector<int>> &set){
        if(idx==nums.size()) {
            sort(temp.begin(),temp.end());
            set.insert(temp);
            return ;
        }
        solve(nums,idx+1,temp,set);
        temp.push_back(nums[idx]);
        solve(nums,idx+1,temp,set);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> set;
        solve(nums,0,{},set);
        vector<vector<int>> res(set.begin(),set.end());
        return res;
    }
};