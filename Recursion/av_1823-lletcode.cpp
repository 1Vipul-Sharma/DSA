//queue 

class Solution {
public:

    int findTheWinner(int n, int k) {
        queue<int> q;
        for(int i=1;i<=n;i++) q.push(i);        
        while(q.size()>1){
            for(int i=1;i<k;i++){
                int ele=q.front();
                q.pop();
                q.push(ele);
            }
            q.pop();
        }
        return q.front();
    }
};


//recursion wala method ache se intuition nhi la parha (11-07-2025)