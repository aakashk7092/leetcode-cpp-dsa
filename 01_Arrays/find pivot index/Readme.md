# Find Pivot Index (LeetCode)

**Difficulty:** Easy
**Problem No.:** 724
**Note:** This problem is equivalent to **LeetCode 1991 – Find the Middle Index in Array**.

---

## Problem

Given an array of integers, find the **pivot index** where the sum of elements to the left is equal to the sum of elements to the right. If no such index exists, return `-1`.

---

## Approach

* Compute the **total sum** of the array.
* Initialize `leftSum = 0`.
* Traverse the array:

  * Calculate `rightSum = totalSum - leftSum - nums[i]`.
  * If `leftSum == rightSum`, return the current index.
  * Update `leftSum += nums[i]`.

---

## Complexity

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(1)`

---

## Key Takeaway

Using prefix sums allows checking the pivot condition in a single pass without extra space.
