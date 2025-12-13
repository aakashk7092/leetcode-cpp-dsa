# 16. 3Sum Closest

**Difficulty:** Medium  
**Topic:** Array, Two Pointers, Sorting  
**LeetCode Link:** https://leetcode.com/problems/3sum-closest/

---

## Problem Statement

Given an integer array `nums` of length `n` and an integer `target`, find **three integers** in `nums` such that the sum is **closest** to `target`.

Return the **sum of the three integers**.

You may assume that each input has **exactly one solution**.

---

## Input

- `vector<int> nums`
- `int target`

---

## Output

- An integer representing the closest sum of three numbers to the target

---

## Example 1

**Input**
nums = [-1,2,1,-4]
target = 1

markdown
Copy code

**Output**
2

yaml
Copy code

**Explanation**  
The sum that is closest to the target is `(-1 + 2 + 1) = 2`.

---

## Constraints

- `3 ≤ nums.length ≤ 1000`
- `-10^3 ≤ nums[i] ≤ 10^3`
- `-10^4 ≤ target ≤ 10^4`

---

## Approach

- Sort the array
- Fix one element `i` and use **two pointers** (`left`, `right`) to explore possible sums
- For each sum:
  - Update the answer if the current sum is closer to the target
  - Move pointers based on whether the sum is less than or greater than the target
- Since the array is sorted, this efficiently narrows down the closest sum

---

## Time and Space Complexity

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

---

## Language Used

- C++
