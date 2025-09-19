// https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1

class Solution {
  public:
    bool isP(vector<int>&arr,int k,int maxP){
        int curr=0;
        int cnt=1;
        for(int i=0;i<arr.size();i++){
            curr+=arr[i];
            if(curr>maxP){
                cnt++;
                curr=arr[i];
            }
            if(cnt>k) return false;
        }
        return true;
    }
    int findPages(vector<int> &arr, int k) {
        // code here
        if(k>arr.size()) return -1;
        int l=*(max_element(arr.begin(),arr.end()));
        int r=accumulate(arr.begin(),arr.end(),0);
        while(l<=r){
            int mid=l+(r-l)/2;
            if(isP(arr,k,mid)) r=mid-1;
            else l=mid+1;
        }
        return l;
    }
};