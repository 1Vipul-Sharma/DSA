class Solution {
public:
    int solve(int n,int k){
        if(n==1 && k==1) return 0;
        int mid= pow(2,n-1)/2;
        if(k<=mid) return solve(n-1,k);
        else return 1-solve(n-1,k-mid); //basically just reverting
    }
    int kthGrammar(int n, int k) {
        return solve(n,k);
    }
};

//IBH Method soch kese lagrha h bad problem se chothi me change karne ke baad induction kya kya lgana hoga tujhe