# Longest Substring Without Repeating Characters

## Problem

Find the length of the longest substring of a given string that contains **no repeating characters**.

---

## Approach

* Use **sliding window (two pointers)**.
* Expand the window while characters are unique.
* Shrink the window when a duplicate appears.
* Keep track of the maximum window length.

---

## What I Learned

* Applying the **sliding window pattern** efficiently
* Handling duplicates using window adjustment
* Reducing time complexity from `O(n²)` to `O(n)`

---

## Complexity

* **Time:** `O(n)`
* **Space:** `O(n)`
