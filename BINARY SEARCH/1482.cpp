class Solution {
public:
    int find(vector<int>& arr,int m,int k,int days){
        int curr=0;
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=days)  cnt++;
            else cnt=0;
            if(cnt==k) {
                curr++;
                cnt=0;
            }
            if(curr>m) break;
        }
        return curr;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if( (1LL*m*k) > n) return -1;
        int l=1;
        int r=*(max_element(bloomDay.begin(),bloomDay.end()));
        while(l<=r){
            int mid=l+(r-l)/2;
            int curr=find(bloomDay,m,k,mid);
            if(curr>=m) r=mid-1;
            else l=mid+1;
        }
        return l;
    }
};