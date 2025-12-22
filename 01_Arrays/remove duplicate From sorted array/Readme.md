# Remove Duplicates from Sorted Array
remove_duplicates_diagram.png


## Problem Description
You are given a **sorted integer array** `nums`.  
Remove the duplicates **in-place** such that each unique element appears only once.

The relative order of the elements must remain unchanged.

Return the number of unique elements `k`.

Only the first `k` elements of the array matter.

---

## Key Observation
Because the array is **already sorted**, all duplicate elements appear **next to each other**.

This allows us to solve the problem efficiently using a **two-pointer approach** without extra space.

---

## Approach (Two Pointers)
- Use one pointer to track the position of the last unique element
- Use another pointer to traverse the array
- When a new unique element is found, move it forward

This modifies the array directly.

---

## Visual Explanation

<p align="center">
  <img src="remove_duplicates_diagram.png" width="85%">
</p>

---

## Example

### Input
nums = [1,1,2,2,3,3,4]

### Output
k = 4
nums = [1,2,3,4,,,_]

Values after index `k - 1` are irrelevant.

---

## Complexity Analysis

| Metric | Complexity |
|------|------------|
| Time Complexity | O(n) |
| Space Complexity | O(1) |

---

## What You Learn from This Problem
- In-place array manipulation
- Efficient use of two pointers
- How sorted data simplifies logic
- Writing optimized solutions without extra memory

---

## Related Problems
- Remove Element  
- Move Zeroes  
- Remove Duplicates from Sorted Array II  

---

## Notes
This problem is a foundation for many array and pointer-based interview questions.
