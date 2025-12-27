# Find First and Last Position of Element in Sorted Array

## Problem Overview

You are given a **sorted array of integers** and a **target value**.  
Your task is to find the **starting and ending position** of the target value in the array.

If the target is not found, return `[-1, -1]`.

---

## Example
Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1, -1]

---

## Key Insight

- The array is **sorted**
- We can use **Binary Search** to efficiently locate the target
- To find the complete range:
  - One binary search finds the **first occurrence**
  - Another binary search finds the **last occurrence**

This avoids scanning the entire array.

---

## Optimized Approach (Two Binary Searches)

### 1. Find Left Boundary
- When target is found:
  - Store the index
  - Continue searching on the **left side**
- This ensures we get the **first position**

### 2. Find Right Boundary
- When target is found:
  - Store the index
  - Continue searching on the **right side**
- This ensures we get the **last position**

---

## Algorithm Steps

- Perform binary search to find the first occurrence
- Perform binary search to find the last occurrence
- Return both indices as a result
- If the target does not exist, both values remain `-1`

---

## Time Complexity

- **O(log n)**  
  Two binary searches on a sorted array.

---

## Space Complexity

- **O(1)**  
  Only constant extra space is used.

---

## Why This Approach?

- Much faster than linear scanning
- Leverages the sorted property of the array
- Clean and reliable solution
- Widely accepted interview approach

---

## Reference

- LeetCode Problem 34: Find First and Last Position of Element in Sorted Array

---

### Author

**Aakash Kumar**  
B.Tech Student | Data Structures & Algorithms


