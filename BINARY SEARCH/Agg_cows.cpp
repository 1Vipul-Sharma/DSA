// https://www.geeksforgeeks.org/problems/aggressive-cows/1

// here we have to maximize the min distance b/w any two cows
// here we are seeing if x distance is possible then maximising it 
// answer it why we are sorting  and why we are placing as soon as a valid spot comes
class Solution {
  public:
  bool isP(vector<int>& arr,int k,int D){
      int cnt=1;
      int prev=arr[0];
      for(int i=1;i<arr.size();i++){
          if(arr[i]-prev>=D) {
              cnt++;
              prev=arr[i];
          }
          if(cnt==k) return true;
      }
      return false;
  }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin(),stalls.end());
        int l=1;
        int mini=*(min_element(stalls.begin(),stalls.end()));
        int maxi=*(max_element(stalls.begin(),stalls.end()));
        int r=maxi-mini;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(isP(stalls,k,mid)) l=mid+1;
            else r=mid-1;
        }
        return r;
    }
};