# Search in Rotated Sorted Array

## Problem Overview

You are given a **rotated sorted array** of distinct integers and an integer **target**.  
Your task is to return the **index of the target** if it exists in the array.  
If the target is not present, return `-1`.

A rotated sorted array is an array that was initially sorted in ascending order and then rotated at an unknown pivot.

---

## Example

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

---

## Key Insight

- Even after rotation, **at least one half of the array is always sorted**
- Using **Binary Search**, we can determine which half is sorted
- Based on the sorted half, we decide whether to search left or right
- This allows us to eliminate half of the array at every step

---

## Optimized Approach (Binary Search)

1. Use two pointers: `start` and `end`
2. Find the middle element
3. If the middle element is the target, return its index
4. Determine which half is sorted:
   - Left half is sorted if `nums[start] <= nums[mid]`
   - Otherwise, right half is sorted
5. Check if the target lies within the sorted half:
   - If yes, search in that half
   - If no, search in the other half
6. Repeat until the search space is exhausted

---

## Algorithm Steps

- Initialize `start = 0`, `end = n - 1`
- While `start <= end`:
  - Compute `mid`
  - If `nums[mid] == target`, return `mid`
  - If left half is sorted:
    - If target lies in left half → move `end`
    - Else → move `start`
  - Else right half is sorted:
    - If target lies in right half → move `start`
    - Else → move `end`
- If the target is not found, return `-1`

---

## Time Complexity

- **O(log n)**  
  Binary search reduces the search space by half on each iteration.

---

## Space Complexity

- **O(1)**  
  Uses constant extra space.

---

## Why This Approach?

- Faster than linear search
- Efficient for large arrays
- Uses the partial sorted property effectively
- Standard and interview-preferred solution

---

## Reference

- LeetCode Problem 33: Search in Rotated Sorted Array

---

### Author

**Aakash Kumar**  
B.Tech Student | Data Structures & Algorithms
