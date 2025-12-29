# Combination Sum

## Problem Overview

You are given an array of **distinct integers** `candidates` and an integer `target`.  
Your task is to find **all unique combinations** of candidates where the chosen numbers sum to `target`.

- Each number in `candidates` may be used **unlimited times**
- The order of combinations does not matter
- The solution set must not contain duplicate combinations

---

## Example

Input:
candidates = [2,3,6,7], target = 7

Output:
[[2,2,3],[7]]

---

## Key Insight

- This is a **backtracking / recursion** problem
- At each step, we have two choices:
  - Include the current element
  - Skip the current element
- A `set` is used to avoid duplicate combinations

---

## Approach Explanation

### Backtracking Strategy

The algorithm recursively explores all possible combinations:

- If `target < 0` → stop (invalid path)
- If `target == 0` → valid combination found
- Otherwise:
  - Take the current element and reduce the target
  - Skip the current element and move forward

A `set<vector<int>>` ensures uniqueness of combinations.

---

## Algorithm Steps

1. Start recursion from index `0`
2. Maintain a temporary combination list
3. On every recursive call:
   - If target becomes `0`, store the combination
   - If target becomes negative or index exceeds size, return
4. Explore:
   - Including current element (stay on same index)
   - Including current element once and moving forward
   - Excluding current element

---

## Time Complexity

- **Exponential**  
  In the worst case, all combinations are explored.

O(2^n) (approximate, depends on target and candidates)

---

## Space Complexity

- **O(n)** for recursion stack and combination storage  
- Additional space for storing results and set

---

## Why This Approach?

- Simple recursive logic
- Covers all possible combinations
- Ensures uniqueness using a set
- Easy to understand and debug

---

## Note

This solution is correct but **not optimal**.  
It can be optimized by:
- Sorting candidates
- Avoiding the `set`
- Using index-based pruning

---

## Reference

- LeetCode Problem 39: Combination Sum

---

### Author

**Aakash Kumar**  
B.Tech Student | Data Structures & Algorithms
