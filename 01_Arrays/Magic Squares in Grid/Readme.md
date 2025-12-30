# Magic Squares in Grid

## Problem Overview

You are given a 2D grid of integers.  
Your task is to count how many **3 × 3 subgrids** inside the grid are **magic squares**.

A **3 × 3 magic square** must satisfy all of the following conditions:

1. It contains **all numbers from 1 to 9 exactly once**
2. The **sum of each row** is the same
3. The **sum of each column** is the same
4. The **sum of both diagonals** is the same

---

## Example

-- <img width="322" height="242" alt="image" src="https://github.com/user-attachments/assets/7779a28e-c84a-45bd-a19a-d5c554dad91e" /> --
**Input: grid = [[4,3,8,4],[9,5,1,9],[2,7,6,2]]**
**Output: 1**
**Explanation: **
**The following subgrid is a 3 x 3 magic square:**
-- <img width="242" height="242" alt="image" src="https://github.com/user-attachments/assets/fcba7f78-a1c4-46b5-976f-62b9cb7ca8bb" /> --

---

## Key Insight

- Only **3 × 3 subgrids** need to be checked
- Any number outside the range `1–9` immediately invalidates the grid
- Duplicate numbers are not allowed
- Once a reference sum is chosen, all rows, columns, and diagonals must match it

---

## Approach Explanation

For every possible `3 × 3` subgrid:

1. **Validate numbers**
   - Ensure all values are between `1` and `9`
   - Ensure all values are unique

2. **Check row sums**
   - All three rows must have the same sum

3. **Check column sums**
   - All three columns must have the same sum

4. **Check diagonal sums**
   - Both diagonals must match the same sum

If all checks pass, the subgrid is a valid magic square.

---

## Algorithm Steps

- Loop through all valid starting positions of a `3 × 3` subgrid
- For each subgrid:
  - Use a set to verify uniqueness and range
  - Compute the sum of the first row
  - Compare row sums, column sums, and diagonal sums
- Count all valid magic squares

---

## Time Complexity

Let:
- `m` = number of rows  
- `n` = number of columns  

Each `3 × 3` grid check takes constant time.

Time Complexity: O(m × n)

