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
=> no. of choices mostly large(mostly depends on input)
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

ek h input size reduce karna fir relation dekhna (jisme mainly make chlte n-1 shi answer dega bas n ko n-1 ka shi answer pata h bas ab apna kaam karna h there might be other way also)

ek h ip op method

ek h choices h fir decision lene h

controlled recursion ke lie ye sochakaro ko current me jo step lera hu wo valid h ....

like in n queeen me mene socha ki queen agr rakhi ja skti h to rakh kar m aage ke lie batadeta hu ki kha kha rakhi ja skti h ....

to m update krdeta tha row col diagonal wgera

===================
but mene solution padha to usme tha ki m jha rkhne jara hu kya m yha rakhskta hu ye valid h bas to usse kafi sare steps bch gye

same sudoku solver me ki m yha jo rakhne jara hu vo valid h ya nhi

so basically hame yehi sochna h ki kya is step ko leskte h agr ye violate krega aage wala check krke btadega

general thing is check before taking any decision whether violating the condition's or not
If yes then don't take the decision

Try to check steps before calling recursion If it is valid to call or not

==============================================================================================================================

🌀 RECURSION
Recursion is a technique where a function calls itself to solve a smaller part of the problem.

Types of Recursion:
mathematica
Copy
Edit
RECURSION
/ | \
 / | \
 BACKTRACKING DP D&C
🔁 BACKTRACKING
Backtracking = Controlled Recursion + Reverting changes

🔹 Core Idea:
You make a decision, explore further with that decision, and then revert it if it leads to a dead end.

🔍 Identification of Backtracking Problems
You’re given choices and need to make decisions

You need all combinations/paths

Input size is small

No greedy or optimal guarantee

You must undo your decisions (backtrack)

Ex: N-Queens, Sudoku, Combinations, Subsets, Word Search

🔁 Why Pass by Reference?
Reduces memory usage (avoids copying vectors/arrays)

Improves speed

Backtracking ensures we revert changes when coming back from recursion

⚠️ Use only when you know how to correctly revert changes

🧠 General Template
cpp
Copy
Edit
void solve(vector<int>& v) {
// Base case
if (isSolved()) {
print/save solution;
return;
}

    for (choice : choices) {
        if (isValid(choice)) {
            // Take the decision
            makeChange(v, choice);

            // Recurse
            solve(v);

            // Undo the decision (backtrack)
            revertChange(v, choice);
        }
    }

}
📊 Time Complexity of Recursive Code
🔹 How to Find Time Complexity:
Total Time = (No. of Recursive Calls or Nodes) × (Work done per node)

Common growth types:

O(2^n) – Each state has 2 choices (e.g., Subsets)

O(n!) – All permutations (e.g., Travelling Salesman, Permutations)

O(k^n) – K choices per position (e.g., Word Search, Sudoku)

🧩 How to Build Recursion
Input/Output Method:

Pass input and output separately (used in combinations, subsets).

Choices + Decision Method:

You’re at a point with multiple choices → pick one → recurse → backtrack

💡 Optimization Insight (N-Queens, Sudoku etc.)
Instead of updating the board blindly, ask:

“Is this move valid before making it?”

Saves unnecessary recursion calls

✔️ Example:

Don’t mark all attack paths in N-Queens.

Instead, before placing a queen, check if the column or diagonal is already under attack.

This reduces overhead and speeds up recursion.

✅ Best Practices
Avoid unnecessary recursion by checking validity first

Track visited/used items using hashsets, bitmasks, arrays

Backtrack properly to ensure state cleanup

Use reference where safe and revert properly

Use pruning wherever possible (cut off invalid branches early)
