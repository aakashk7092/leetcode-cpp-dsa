# 4. Median of Two Sorted Arrays

**Difficulty:** Hard  
**Topic:** Array, Binary Search  
**LeetCode Link:** https://leetcode.com/problems/median-of-two-sorted-arrays/

---

## Problem Statement

Given two sorted arrays `nums1` and `nums2` of sizes `m` and `n` respectively, return the **median** of the two sorted arrays.

The overall run time complexity should be **O(log (m + n))**.

---

## Input

- `vector<int> nums1`
- `vector<int> nums2`

---

## Output

- A `double` representing the median of the two sorted arrays

---

## Example 1

**Input**
nums1 = [1,3]
nums2 = [2]


**Output**


2.0


---

## Example 2

**Input**


nums1 = [1,2]
nums2 = [3,4]


**Output**


2.5


---

## Constraints

- `0 ≤ m ≤ 1000`
- `0 ≤ n ≤ 1000`
- `1 ≤ m + n ≤ 2000`
- Arrays are sorted in non-decreasing order

---

## Approach

- Always apply **binary search on the smaller array** to minimize complexity
- Partition both arrays such that:
  - Left part contains half of the total elements
  - Every element on the left is less than or equal to every element on the right
- Handle edge cases using `INT_MIN` and `INT_MAX`
- If total length is even, median is the average of the two middle elements
- If total length is odd, median is the maximum of the left partition

---

## Time and Space Complexity

- **Time Complexity:** O(log(min(m, n)))
- **Space Complexity:** O(1)

---

## Language Used

- C++
