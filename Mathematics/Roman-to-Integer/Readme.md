# Roman to Integer (LeetCode)

## Problem

Given a **Roman numeral string**, convert it into its corresponding **integer value**.

---

## Approach

* Store Roman symbols and their values in a hash map.
* Traverse the string from left to right.
* If the current symbol is **smaller than the next symbol**, subtract its value.
* Otherwise, add its value to the result.
* This handles subtractive cases like `IV`, `IX`, `XL`, etc.

---

## What I Learned

* Handling **subtractive notation** in Roman numerals
* Efficient use of a **hash map** for quick lookups
* Applying simple comparison logic to avoid complex conditions

---

## Complexity

* **Time:** `O(n)`
* **Space:** `O(1)`
