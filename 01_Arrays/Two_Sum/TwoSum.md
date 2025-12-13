# 1. Two Sum

**Difficulty:** Easy  
**Topic:** Array, Hashing  
**LeetCode Link:** https://leetcode.com/problems/two-sum/

---

## Problem Statement

Given an array of integers `nums` and an integer `target`, return the **indices of the two numbers** such that they add up to `target`.

You may assume that:
- Each input has **exactly one solution**
- You may **not use the same element twice**
- The answer can be returned in **any order**

---

## Input

- `nums`: Array of integers  
- `target`: Integer

---

## Output

- A vector containing the **indices** of the two numbers whose sum equals `target`

---

## Example

**Input**
nums = [2, 7, 11, 15]
target = 9

**Output**
[0, 1]


**Explanation**  
nums[0] + nums[1] = 2 + 7 = 9

---

## Approach

- Use a **hash map** to store each number and its index
- For every element:
  - Calculate `required = target - nums[i]`
  - Check if `required` already exists in the map
- If yes, return the stored index and the current index

This avoids the brute-force approach and improves efficiency.

---

## Time and Space Complexity

- **Time Complexity:** O(n)  
- **Space Complexity:** O(n)

---

## Language Used

- C++
