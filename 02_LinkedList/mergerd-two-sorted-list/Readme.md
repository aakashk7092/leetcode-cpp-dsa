# Merge Two Sorted Lists (LeetCode)

## Problem

Given two **sorted linked lists**, merge them into one sorted linked list and return its head.

---

## Approach

* Use a **recursive approach**.
* Compare the current nodes of both lists.
* Attach the smaller node to the result.
* Recursively merge the remaining part of the lists.
* Base case: if one list becomes empty, return the other list.

---

## What I Learned

* Applying **recursion** on linked lists
* Simplifying merge logic using recursive calls
* Handling base cases cleanly

---

## Complexity

* **Time:** `O(n + m)`
* **Space:** `O(n + m)` (recursive call stack)
