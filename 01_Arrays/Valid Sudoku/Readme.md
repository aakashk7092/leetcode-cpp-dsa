# Valid Sudoku

## Problem Overview

You are given a **9×9 Sudoku board** partially filled with digits (`1–9`) and empty cells represented by `'.'`.  
Your task is to determine whether the board is **valid according to Sudoku rules**.

A valid Sudoku board must satisfy:
- Each **row** contains digits `1–9` without repetition
- Each **column** contains digits `1–9` without repetition
- Each **3×3 sub-box** contains digits `1–9` without repetition

Note: The board does **not** need to be completely filled to be valid.

---

## Example

<img width="250" height="250" alt="image" src="https://github.com/user-attachments/assets/122cbaca-b332-4869-89b7-c2b9fc14ff20" />
---
Input:
[
["5","3",".",".","7",".",".",".","."],
["6",".",".","1","9","5",".",".","."],
[".","9","8",".",".",".",".","6","."],
["8",".",".",".","6",".",".",".","3"],
["4",".",".","8",".","3",".",".","1"],
["7",".",".",".","2",".",".",".","6"],
[".","6",".",".",".",".","2","8","."],
[".",".",".","4","1","9",".",".","5"],
[".",".",".",".","8",".",".","7","9"]
]

Output: true
---

## Key Insight

- Sudoku validity depends only on **duplicates**
- Empty cells (`.`) are ignored
- Hash-based structures help detect duplicates efficiently

---

## Optimized Approach

The solution validates the board in **three independent checks**:

### 1. Row Validation
- Traverse each row
- Use a hash set to detect duplicate digits

### 2. Column Validation
- Traverse each column
- Use a hash set to detect duplicate digits

### 3. 3×3 Sub-box Validation
- Divide the board into nine 3×3 boxes
- For each box, check duplicates using a hash set

If any rule is violated, return `false`.  
If all checks pass, return `true`.

---

## Algorithm Steps

- For each row:
  - Check duplicates ignoring `'.'`
- For each column:
  - Check duplicates ignoring `'.'`
- For each 3×3 sub-box:
  - Check duplicates ignoring `'.'`
- If no duplicates found, the board is valid

---

## Time Complexity

- **O(1)**  
  The board size is fixed (9×9), so operations are constant time.

---

## Space Complexity

- **O(1)**  
  Hash sets store at most 9 elements; space usage is constant.

---

## Why This Approach?

- Clear separation of Sudoku rules
- Efficient duplicate detection
- Easy to debug and maintain
- Standard and interview-approved solution

---

## Reference

- LeetCode Problem 36: Valid Sudoku

---

### Author

**Aakash Kumar**  
B.Tech Student | Data Structures & Algorithms

