# Pascal’s Triangle

## Problem Overview

Given an integer **numRows**, generate the first **numRows** of **Pascal’s Triangle**.

In Pascal’s Triangle:
- The first and last element of every row is `1`
- Each interior element is the sum of the two elements directly above it

---

## Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
---
## Example 2:

Input: numRows = 1
Output: [[1]]

---

## Key Insight

- Every row represents values of **binomial coefficients**
- Each element can be calculated using the formula:
  C(n, k) = C(n, k-1) * (n - k + 1) / k
  
- This avoids recalculating sums from previous rows and improves efficiency

---

## Optimized Approach

1. Generate each row independently
2. Start each row with `1`
3. Use the binomial coefficient formula to compute remaining values
4. Append each generated row to the triangle

This approach avoids nested summation and keeps calculations efficient.

---

## Algorithm Steps

- Initialize an empty 2D vector for the triangle
- For each row index from `1` to `numRows`:
  - Create a new row
  - Set the first element to `1`
  - Compute remaining elements using the previous value
  - Add the row to the triangle

---

## Time Complexity

- **O(n²)**  
  Each row has up to `n` elements, and there are `n` rows.

---

## Space Complexity

- **O(n²)**  
  Required to store all rows of Pascal’s Triangle.

---

## Why This Approach?

- Avoids repeated addition of previous rows
- Uses mathematical properties of combinations
- Clean and efficient for large inputs
- Produces accurate results without overflow issues

---

## Reference

- LeetCode Problem 118: Pascal’s Triangle

---

### Author

**Aakash Kumar**  
B.Tech Student | Data Structures & Algorithms

