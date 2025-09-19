class Solution {
public:
    int find(vector<int>& weights,int maxDays,int Capacity){
        int days_req=1;
        int curr=0;
        for(int i=0;i<weights.size();i++){
            curr+=weights[i];
            if(curr>Capacity){
                days_req++;
                curr=weights[i];
            }
            if(days_req>maxDays) break;
        }
        return days_req;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l=*(max_element(weights.begin(),weights.end()));
        int r=accumulate(weights.begin(),weights.end(),0);
        while(l<=r){
            int mid=l+(r-l)/2;
            int days_req=find(weights,days,mid);
            if(days_req<=days) r=mid-1;
            else l=mid+1;
        }
        return l;
    }
};