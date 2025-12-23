# Find the Pivot Integer

## Problem
Given a positive integer `n`, find the **pivot integer `x`** such that:

1 + 2 + ... + x = x + (x + 1) + ... + n

Return the pivot integer if it exists, otherwise return `-1`.

---

## Example

**Input**
n = 8

**Output**
6
--
  <img width="900" height="700" alt="image" src="https://github.com/user-attachments/assets/d3f806f9-64cc-4d03-a314-91b27f4f30ab" />
---

## Complexity
- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`

---

## Summary
- The problem reduces to checking whether the total sum is a perfect square.
- If yes, the square root is the pivot integer.
- If not, no pivot integer exists.

---

## Author
**Aakash Kumar**  
LeetCode: https://leetcode.com/aakashkumar2005
