Enhanced recusion

identify
1 choices
2 overlapping recursion call(optimal asked)

Dynamic Programming is a commonly used algorithmic technique used to optimize recursive solutions when same subproblems are called again
When to Use DP

1. Optimal Substructure:
   The property Optimal substructure means that we use the optimal results of subproblems to achieve the optimal result of the bigger problem.
2. Overlapping Subproblems:
   The same subproblems are solved repeatedly in different parts of the problem refer to Overlapping Subproblems Property in Dynamic Programming.

Approaches of DP 1. Top-Down Approach (Memoization): 2. Bottom-Up Approach (Tabulation):

=============================================================

            Knapsack problems
        /           |           \
    fractional     0/1         unbounded
    (greedy)        (DP)        (DP)

- fractional => simply sort in decresing order of val/wt . Jo jyada val/wt carry krri h use bhro sabse pehle .

- 0/1 => we cann't do this like as pvs. It might possible that some other combination giving max output.(DP as we have choices we can have or not plus we have to optimize the answer(max));

unbounded - we have no bound for the input elements. we have infinite supply for these.Choices h decision lene h combinations bnenge

//to do later jab o/1 knapsack pattern hojaega sabse last me ye karne h (Kal khatam karna h o/1 knapsack pattern 03-08-2025)
ways to partition an array
2035
partition with given difference
