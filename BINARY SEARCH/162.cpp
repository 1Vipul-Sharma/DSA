// if ele[mid]<ele[mid+1] that means we will definitely find peak ele in right (think) so we can skip left search space

class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int l=0,r=arr.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if((mid==0 || arr[mid]>arr[mid-1]) && (mid==arr.size()-1 || arr[mid]>arr[mid+1])) return mid;
            else if(mid!=0 && arr[mid-1]>arr[mid]) r=mid-1;
            else l=mid+1;
        }
        return -1;
    }
};