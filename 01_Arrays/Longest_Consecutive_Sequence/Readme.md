# Longest Consecutive Sequence

## Problem
Given an unsorted array of integers, determine the length of the longest sequence of consecutive integers.

A sequence is considered consecutive if each element differs from the previous one by exactly one.  
The elements of the sequence do not need to be contiguous in the original array.

---

## Approach
This solution uses a sorting-based strategy:

- First, the array is sorted to bring consecutive numbers next to each other.
- The array is then traversed once to count consecutive elements.
- Duplicate values are ignored to avoid incorrect sequence counts.
- A running count is maintained for the current sequence, and the maximum length encountered is tracked.

---

## Algorithm
1. If the array is empty, return 0.
2. Sort the array in ascending order.
3. Initialize:
   - a counter for the current consecutive sequence
   - a variable to store the maximum sequence length
4. Traverse the sorted array:
   - If the current element is exactly one greater than the previous valid element, extend the sequence.
   - If the element is different but not consecutive, reset the sequence count.
   - Ignore duplicate values.
5. Update the maximum length during traversal.
6. Return the maximum length.

---

## Complexity Analysis
- Time Complexity: O(n log n), due to sorting
- Space Complexity: O(1), excluding input storage

---

## Notes
- This approach is simple and easy to implement.
- Sorting ensures consecutive elements appear adjacent in the array.
- While not optimal compared to hash-based solutions, it is reliable and acceptable for moderate input sizes.

---

## Reference
LeetCode – Longest Consecutive Sequence  
https://leetcode.com/problems/longest-consecutive-sequence/
