# Flood Fill

**Problem ID:** 733  
**Difficulty:** Easy  
**Category:** Depth First Search, Graph, Matrix Traversal  

---

## Problem Description

You are given a 2D grid representing an image, where each cell contains a color value.

Starting from a given pixel `(sr, sc)`, change the color of that pixel and all pixels connected to it **4-directionally** (up, down, left, right) that have the same original color to a new specified color.

Return the modified image.

---

## Key Points

- Only horizontal and vertical neighbors are considered connected  
- Diagonal cells are not connected  
- If the starting pixel already has the target color, the image remains unchanged  
- The problem can be modeled as a graph traversal on a grid  

---

## Approach

The problem is solved using **Depth First Search (DFS)**.

1. Store the original color of the starting pixel  
2. If the original color equals the new color, return the image immediately  
3. Perform DFS from the starting pixel  
4. For each pixel:
   - Check if it lies within the grid boundaries  
   - Check if it matches the original color  
   - Update the pixel to the new color  
   - Recursively process its four neighbors  

---

## Algorithm

- Initialize DFS at `(sr, sc)`  
- For each DFS call:
  - Terminate if indices are out of bounds  
  - Terminate if the pixel color differs from the original color  
  - Change the pixel color  
  - Continue DFS in four directions  

---

## Time Complexity

- **O(m × n)**  
Each pixel is visited at most once in the worst case.

---

## Space Complexity

- **O(m × n)**  
Worst-case space is used by the recursion stack when the entire grid is filled with the same color.

---

## Concepts Covered

- Depth First Search (DFS)  
- Matrix traversal  
- Graph representation of grids  
- Boundary and condition handling  

---

## Related Problems

- Number of Islands  
- Max Area of Island  
- Surrounded Regions  
- Rotting Oranges  
