// we can also make l=1,r=size-2 to avoid checking mid==0 and mid==n-1
// (even,odd) before single ele (odd,even) after 
// that means if we encounter equal ele at first even idx then odd that means single ele is at right 

class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n=arr.size();
        int l=0,r=n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if((mid==0 || arr[mid-1]!=arr[mid]) && (mid==n-1 || arr[mid+1]!=arr[mid])) return arr[mid];
            else if(mid==0 || arr[mid-1]==arr[mid]){
                if(mid%2) l=mid+1;
                else r=mid-1;
            }
            else{
                if(mid%2) r=mid-1;
                else l=mid+1;
            }
        }
        return -1;
    }
};