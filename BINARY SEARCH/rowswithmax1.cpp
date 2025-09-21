// https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1

// simple just find lower_bound of 1 for each row
// User function template for C++
#include<bits/stdc++.h>
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int n=arr.size(),m=arr[0].size();
        int maxi=-1,idx=-1;
        for(int i=0;i<n;i++){
                int lower= lower_bound(arr[i].begin(),arr[i].end(),1)-arr[i].begin();
                int cnt = arr[i].size() - lower;
                // cout<<cnt<<" "<<i;
                if(cnt>maxi){
                    maxi=cnt;
                    idx=i;
                }
            
        }
        return idx;
    }
};