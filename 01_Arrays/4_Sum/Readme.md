# 18. 4Sum

**Difficulty:** Medium  
**Topic:** Array, Two Pointers, Sorting  
**LeetCode Link:** https://leetcode.com/problems/4sum/

---

## Problem Statement

Given an array `nums` of `n` integers and an integer `target`, return **all unique quadruplets**  
`[nums[a], nums[b], nums[c], nums[d]]` such that:

- `a`, `b`, `c`, and `d` are **distinct indices**
- `nums[a] + nums[b] + nums[c] + nums[d] == target`

The solution set **must not contain duplicate quadruplets**.

---

## Input

- `vector<int> nums`
- `int target`

---

## Output

- `vector<vector<int>>` containing all unique quadruplets whose sum equals `target`

---

## Example 1

**Input**
nums = [1,0,-1,0,-2,2]
target = 0

**Output**
[[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

---

## Constraints

- `1 ≤ nums.length ≤ 200`
- `-10^9 ≤ nums[i] ≤ 10^9`
- `-10^9 ≤ target ≤ 10^9`

---

## Approach

- Sort the array to handle duplicates easily
- Fix two indices `i` and `j`
- Use **two pointers** (`left`, `right`) for the remaining part of the array
- Skip duplicate values at every level (`i`, `j`, `left`, `right`) to avoid repeated quadruplets
- Adjust pointers based on the current sum compared to the target

This approach efficiently finds all valid quadruplets without duplication.

---

## Time and Space Complexity

- **Time Complexity:** O(n³)
- **Space Complexity:** O(1) (excluding output storage)

---

## Language Used

- C++
