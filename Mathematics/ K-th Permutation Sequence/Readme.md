# K-th Permutation Sequence

## Problem Overview

Given two integers **n** and **k**, return the **k-th permutation sequence** of numbers from `1` to `n` in **lexicographical order**.

### Example
Input: n = 3, k = 3
Output: "213"

All permutations of `[1,2,3]`:
1st → 123
2nd → 132
3rd → 213
4th → 231
5th → 312
6th → 321

---

## Key Insight

- Total permutations of `n` numbers = `n!`
- Fixing one number at a position creates `(n-1)!` permutations
- Instead of generating all permutations, we directly compute the required one using factorial-based indexing

---

## Optimized Approach

1. Create a list of numbers from `1` to `n`
2. Precompute factorial values
3. Convert `k` to **0-based indexing**
4. For each position:
   - Determine which number belongs to the current block using factorial math
   - Add that number to the result
   - Remove it from the list
   - Update `k` for the remaining positions

This avoids unnecessary permutation generation and ensures efficiency.

---

## Algorithm Steps

- Initialize a list: `[1, 2, ..., n]`
- Precompute factorials
- Convert `k` to zero-based indexing
- Repeat until all positions are filled:
  - Find the correct index using factorial division
  - Select and remove the element
  - Update `k`

---

## Time Complexity

- **O(n²)**  
  Due to repeated removal of elements from a vector/list.

---

## Space Complexity

- **O(n)**  
  Used for storing factorials and the list of remaining numbers.

---

## Why This Approach?

- Much faster than brute-force permutation generation
- Uses mathematical properties of permutations
- Avoids runtime errors and unnecessary memory usage
- Works efficiently within given constraints

---

## Reference

- LeetCode Problem 60: K-th Permutation Sequence

---

### Author

**Aakash Kumar**  
B.Tech Student | Data Structures & Algorithms
