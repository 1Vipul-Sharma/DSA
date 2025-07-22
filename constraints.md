CPU power ==> 10^8 /sec

=============================================
Solution Pass ==>
NO of operation <= no of seconds (default=1)\* 10^8

============================================

No of operation
constraint
min <= N <= max

our solution time complexity O(n^2) => O(max^2)

max<=10^4 only then

solution pass condition matched

means recursion type of solution also works
n<=20 O(2^n)

# n<=11 O(n!)

✅ CPU Power & Time Complexity Guide
🔧 Assumption:
CPU Power ≈ 10^8 operations per second (standard competitive programming/LeetCode benchmark)

⏱ Solution Pass Condition:
To ensure your solution passes within the time limit:

✅ Number of operations ≤ 1 second × 10^8 = 10^8 operations

🔢 Time Complexity vs Input Constraints:
Time Complexity Max N Allowed Examples / Notes
O(1), O(log N), O(N) N ≤ 10^8 Always acceptable
O(N log N) N ≤ 10^6 Common for sorting or efficient solutions
O(N²) N ≤ 10^4 Acceptable for nested loops or brute force
O(N³) N ≤ 500 Use only for small constraints (e.g., graphs, matrices)
O(2^N) N ≤ 20 Suitable for backtracking, subsets, recursion
O(N!) N ≤ 11 Used for permutations, brute-force recursive searches

📌 Key Takeaways:
For brute-force (O(N²)), the upper limit is typically N ≤ 10^4.

For backtracking (O(2^N)), keep N ≤ 20.

For full permutation (O(N!)), limit to N ≤ 10 or 11.

💡 Tip:
Before optimizing, estimate whether your solution meets the operation limit using this CPU guide. If not, explore better algorithms or reduce input size.
