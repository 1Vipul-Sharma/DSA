class Solution {
public:
    long long find(vector<int>& piles,int cap,int h){
        long long res=0;
        for(int i=0;i<piles.size();i++){
            res+= ceil(double(piles[i]) / cap); // 5.2 => 6 
            if(res>h) break;
        }
        return res;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r= *(max_element(piles.begin(),piles.end()));
        while(l<=r){
            int mid = l+(r-l)/2;
            int curr_h = find(piles,mid,h);
            if(curr_h>h) l=mid+1;
            else r=mid-1;
        }
        return l;
    }
};