# Reverse Integer (LeetCode - 7)

## Problem

Given a 32-bit signed integer `x`, return its digits **reversed**. If reversing causes the value to go outside the 32-bit signed integer range, return `0`.

---

## Approach

* Extract digits using modulo (`x % 10`).
* Build the reversed number by multiplying the current result by 10 and adding the digit.
* Before updating, check for **overflow/underflow** using `INT_MAX / 10` and `INT_MIN / 10`.
* If overflow is detected, return `0` immediately.

---

## What I Learned

* Safe handling of **integer overflow** in C++
* Using modulo and division for digit manipulation
* Importance of validating constraints before updating values

---

## Complexity

* **Time:** `O(d)` where `d` is the number of digits
* **Space:** `O(1)`
