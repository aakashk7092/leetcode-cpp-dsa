# String to Integer (atoi)

## Problem

Convert a string into a **32-bit signed integer** following `atoi` rules: ignore leading spaces, handle optional sign, read digits until a non-digit appears, and clamp values within integer range.

---

## Approach

* Skip leading whitespaces.
* Check for optional `'+'` or `'-'` sign.
* Convert consecutive digits into an integer.
* Stop conversion when a non-digit is encountered.
* Handle **overflow/underflow** by clamping to `INT_MAX` or `INT_MIN`.

---

## What I Learned

* Careful **string parsing** step by step
* Handling **edge cases** like overflow and invalid characters
* Importance of following problem constraints strictly

---

## Complexity

* **Time:** `O(n)`
* **Space:** `O(1)`
