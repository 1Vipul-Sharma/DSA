//Greedy
//choices nhi h isme isme jo per wt sabsae jyada value dega we prefer that first
class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        vector<vector<int>> req;
        for(int i=0;i<val.size();i++){
            req.push_back({val[i],wt[i]});
        }
        sort(req.begin(),req.end(),[](const vector<int>& a,const vector<int>& b){
            return (double)a[0] / a[1] > (double)b[0] / b[1];
        });
        // for(auto& ele:req) cout<<ele[0]<<" "<<ele[1]<<endl;
        double res=0;
        for(int i=0;i<req.size();i++){
            if(capacity>=0){
                if(req[i][1]<=capacity){
                    res+=req[i][0];
                    capacity-=req[i][1];
                }
                else{
                    double temp=(double)req[i][0]/req[i][1];
                    res=res+temp*capacity;
                    capacity=0;
                }
            }
            else break;
        }
        return res;
    }
};
