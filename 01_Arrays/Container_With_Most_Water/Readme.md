# 11. Container With Most Water

**Difficulty:** Medium  
**Topic:** Array, Two Pointers  
**LeetCode Link:** https://leetcode.com/problems/container-with-most-water/

---

## Problem Statement

You are given an integer array `height` of length `n`.  
There are `n` vertical lines drawn such that the two endpoints of the `i`-th line are `(i, 0)` and `(i, height[i])`.

Find **two lines** that together with the x-axis form a container, such that the container contains the **maximum amount of water**.

Return the **maximum water** that the container can store.

---

## Input

- `vector<int> height`

---

## Output

- An integer representing the maximum area of water

---

## Example

**Input**
height = [1,8,6,2,5,4,8,3,7]

**Output**
49

**Explanation**  
The container formed by lines at index `1` and `8` holds the maximum water:
min(8, 7) × (8 − 1) = 7 × 7 = 49

## Constraints

- `2 ≤ n ≤ 10^5`
- `0 ≤ height[i] ≤ 10^4`

## Approach

- Use the **two-pointer technique**
- Start with one pointer at the beginning and one at the end
- Calculate the area using:
area = min(height[left], height[right]) × (right − left)


- Move the pointer pointing to the **smaller height**, since moving the taller one cannot increase the area

This ensures an optimal solution in linear time.


## Time and Space Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Language Used

- C++
