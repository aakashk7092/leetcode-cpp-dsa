# Count Negative Numbers in a Sorted Matrix

## Problem Overview

You are given a matrix where **each row is sorted in non-increasing order**.  
Your task is to count the total number of **negative numbers** in the matrix.

---

## Example

Input:
grid = [
[4, 3, 2, -1],
[3, 2, 1, -1],
[1, 1, -1, -2],
[-1, -1, -2, -3]
]

Output: 8

---

## Key Insight

- Each row of the matrix is **sorted**
- All negative numbers appear **after a certain index**
- Using **binary search**, we can find the first negative number in each row efficiently

---

## Optimized Approach

1. For each row:
   - Apply binary search to locate the first negative number
2. Count how many elements appear after that index
3. Sum the count across all rows

This avoids scanning the entire matrix.

---

## Algorithm Steps

- Initialize total count as `0`
- For each row in the matrix:
  - Use binary search to find the first negative number
  - Add `(row length − firstNegativeIndex)` to the total
- Return the final count

---

## Time Complexity

Let:
- `m` = number of rows  
- `n` = number of columns  

- **Time Complexity:** `O(m log n)`  
  Binary search is applied on each row.

---

## Space Complexity

- **O(1)**  
  Only constant extra space is used.

---

## Why This Approach?

- Faster than brute force (`O(m × n)`)
- Takes advantage of the sorted property
- Clean and interview-optimized solution

---

## Reference

- LeetCode Problem 1351: Count Negative Numbers in a Sorted Matrix

---

### Author

**Aakash Kumar**  
B.Tech Student | Data Structures & Algorithms
