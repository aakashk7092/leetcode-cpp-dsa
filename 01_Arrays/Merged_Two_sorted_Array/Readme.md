# Median of Two Sorted Arrays (Using Extra Space)

## Problem

Given two sorted arrays, find the **median** of the combined sorted array.

---

## Approach (M + N Space)

* Create a new array to store elements of both arrays.
* Merge both arrays in **sorted order**.
* After merging, compute the median:

  * If total length is odd → return middle element.
  * If even → return average of two middle elements.

---

## What I Learned

* How to **merge two sorted arrays** efficiently
* Clear understanding of **median calculation**
* Difference between simple merge approach and optimized binary-search solution

---

## Complexity

* **Time:** `O(m + n)`
* **Space:** `O(m + n)`
