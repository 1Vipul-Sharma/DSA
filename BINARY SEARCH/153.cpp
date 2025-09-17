// if left half is sorted then min can be at left only skip that search space then
class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini=INT_MAX;
        int l=0,r=nums.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[l]<=nums[mid]){
                mini=min(mini,nums[l]);
                l=mid+1;
            }
            else{
                mini=min(mini,nums[mid]);
                r=mid-1;
            }
        }
        return mini;
    }
};