//rotated array to the left

//We can skip half search space by using the fact that one half is always sorted 
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        int idx=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target) return mid;
            else if(nums[l]<=nums[mid]){
                if(nums[l]<=target && target<=nums[mid]){
                    r=mid-1;
                }
                else l=mid+1;
            }
            else{
                if(nums[mid]<=target && target<=nums[r]){
                    l=mid+1;
                }
                else r=mid-1;
            }
        }
        return idx;
    }
};