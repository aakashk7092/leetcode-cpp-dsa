# 15. 3Sum

**Difficulty:** Medium  
**Topic:** Array, Two Pointers, Sorting  
**LeetCode Link:** https://leetcode.com/problems/3sum/

---

## Problem Statement

Given an integer array `nums`, return **all the unique triplets** `[nums[i], nums[j], nums[k]]` such that:

- `i != j`, `i != k`, and `j != k`
- `nums[i] + nums[j] + nums[k] == 0`

The solution set **must not contain duplicate triplets**.

---

## Input

- `vector<int> nums`

---

## Output

- `vector<vector<int>>` containing all unique triplets that sum to zero

---

## Example 1

**Input**
nums = [-1,0,1,2,-1,-4]

markdown
Copy code

**Output**
[[-1,-1,2],[-1,0,1]]

yaml
Copy code

---

## Example 2

**Input**
nums = [0,1,1]

markdown
Copy code

**Output**
[]

yaml
Copy code

---

## Example 3

**Input**
nums = [0,0,0]

markdown
Copy code

**Output**
[[0,0,0]]

yaml
Copy code

---

## Constraints

- `3 ≤ nums.length ≤ 3000`
- `-10^5 ≤ nums[i] ≤ 10^5`

---

## Approach

- Sort the array
- Fix one element `i` and use **two pointers** (`left`, `right`) to find pairs that sum to `-nums[i]`
- Skip duplicate elements to avoid repeated triplets
- Adjust pointers based on the current sum

This ensures all valid triplets are found efficiently without duplicates.

---

## Time and Space Complexity

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1) (excluding output storage)

---

## Language Used

- C++
