# Valid Parentheses (LeetCode)

## Problem

Given a string containing only parentheses characters `()[]{}`, determine if the input string is **valid**.

---

## Approach

* Use a **stack** to track opening brackets.
* Push opening brackets onto the stack.
* For every closing bracket:

  * If the stack is empty → return false.
  * Check whether it matches the top of the stack.
* At the end, the stack should be empty for a valid string.

---

## What I Learned

* Proper use of **stack data structure**
* Matching opening and closing symbols efficiently
* Handling edge cases like extra or mismatched brackets

---

## Complexity

* **Time:** `O(n)`
* **Space:** `O(n)`
