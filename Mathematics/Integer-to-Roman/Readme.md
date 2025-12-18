# Integer to Roman (LeetCode)

## Problem

Given an integer `num`, convert it to its **Roman numeral** representation using standard Roman numeral rules.

---

## Approach

* Maintain two arrays:

  * One for **integer values**: `1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1`
  * One for corresponding **Roman symbols**: `M, CM, D, CD, C, XC, L, XL, X, IX, V, IV, I`
* Iterate from the largest value to the smallest.
* While `num` is greater than or equal to the current value:

  * Append the corresponding Roman symbol to the result.
  * Subtract the value from `num`.
* Stop when `num` becomes zero.

---

## What I Learned

* Applying a **greedy strategy** for numeral conversion
* Handling special subtractive cases like `IV`, `IX`, `XL`, `XC`
* Using value-symbol mapping for clean and readable logic

---

## Complexity

* **Time:** `O(1)` (fixed set of Roman symbols)
* **Space:** `O(1)`
