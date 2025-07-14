                                                            RECURSION
                                                /               |            \
                                               /                |             \
                                            Backtracking       DP             DNC

Controlled Recursion + Pass By reference

basically pass by reference karte h so jab apne child state se parent ki trf aata h usme hame apne changes revert karne hote h jise backtrack bolte h

Identification --

=> choices + decision
=> all combinations(or path )
=> controlled recursion
=> no. of choices mostly large
=> size of constraints (small)
=> don't be greedy

// jab hame cheezein backtrack hi karni h to ham pass by reference (hmare input ko) kar hi kyu rhe h I think there is two reason for that as we have multiple choices in backtracking so we have to create so much variables in memory if we are passing by value and second reason i am not sure but it would be hard to solve(for this if we pass by value like recursion) . LOL

generalization --

        void solve( &v){
            //base condition
            if(issolved()){
                print /save;
                return;
            }
            for (c:choices){
                if(isvalid()){
                    changes in v
                    solve(v);
                    revert changes in v //Backtrack step
                }
            }
            return ;
        }

how to find TC of recursive functions

Time calculated = Just calculate no of nodes \* time taken by one F(n)

sometimes n! or 2^n this is usually the max no of nodes at any level taken by us

mainly expo, factorial or polynomial

worst time complexity = O(time calculated)
