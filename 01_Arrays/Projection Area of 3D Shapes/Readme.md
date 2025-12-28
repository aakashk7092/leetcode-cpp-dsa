# Projection Area of 3D Shapes

## Problem Overview

You are given an `n × n` grid where each cell represents the height of stacked cubes at that position.  
Your task is to calculate the **total projection area** of the 3D shape on the **XY**, **YZ**, and **ZX** planes.

---

## Projection Planes Explained

### 1. XY Plane (Top View)
- Each non-zero cell contributes **1 unit** to the area
- Counts how many stacks are visible from the top

### 2. YZ Plane (Side View)
- For each row, take the **maximum height**
- Represents the side projection

### 3. ZX Plane (Front View)
- For each column, take the **maximum height**
- Represents the front projection

---

## Example

Input:
grid = [
[1, 2],
[3, 4]
]

Output:
17

### Explanation
- XY area = 4
- YZ area = max(1,2) + max(3,4) = 2 + 4 = 6
- ZX area = max(1,3) + max(2,4) = 3 + 4 = 7

**Total Projection Area = 4 + 6 + 7 = 17**

---

## Optimized Approach

1. Traverse each cell to count non-zero values (XY projection)
2. Track the maximum value of each row (YZ projection)
3. Track the maximum value of each column (ZX projection)
4. Add all three areas to get the final result

---

## Algorithm Steps

- Initialize total area as `0`
- For each row:
  - Count non-zero cells
  - Compute row-wise maximum
  - Compute column-wise maximum
- Return the accumulated area

---

## Time Complexity

- **O(n²)**  
  Each cell of the grid is visited once.

---

## Space Complexity

- **O(1)**  
  Only constant extra space is used.

---

## Why This Approach?

- Simple and intuitive
- Efficient for large grids
- Avoids unnecessary data structures
- Accepted and interview-friendly solution

---

## Reference

- LeetCode Problem 883: Projection Area of 3D Shapes

---

### Author

**Aakash Kumar**  
B.Tech Student | Data Structures & Algorithms
