# Combinations (Backtracking)

## Problem Statement
You are given two integers `n` and `k`.

Return all possible combinations of `k` numbers chosen from the range `[1, n]`.

The order of combinations does not matter.

---

## Example 1:

Input: n = 4, k = 2
Output: [[1,2],[1,3],[1,4],[2,3],[2,4],[3,4]]
Explanation: There are 4 choose 2 = 6 total combinations.
Note that combinations are unordered, i.e., [1,2] and [2,1] are considered to be the same combination.
## Example 2:

Input: n = 1, k = 1
Output: [[1]]
Explanation: There is 1 choose 1 = 1 total combination.
## Approach Used (Backtracking)

This problem is solved using **backtracking**.

### Core Idea
- Start from number `1` and explore all possible choices
- At every step, decide:
  - **Include** the current number
  - **Exclude** the current number
- When `k` becomes `0`, a valid combination is formed

---

## Algorithm Steps
1. Start recursion from `start = 1`
2. If `k == 0`, store the current combination
3. If `start > n`, stop recursion
4. Include the current number and recurse
5. Backtrack and exclude the current number
6. Continue until all combinations are explored

---

## Complexity Analysis
- **Time Complexity:** `O(C(n, k))`
- **Space Complexity:** `O(k)` (recursion stack and temporary vector)
