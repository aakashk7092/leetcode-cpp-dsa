# Can Make Arithmetic Progression From Sequence

## Problem
Given an array of integers, determine whether the elements can be rearranged to form an **arithmetic progression**.

An arithmetic progression is a sequence where the difference between consecutive elements is constant.

---

## Example

**Input**
[3, 5, 1]

**Output**
true

**Explanation**  
Rearranging the array gives `[1, 3, 5]`, which has a constant difference of `2`.

---

## Approach 1: Sorting

### Steps
1. Sort the array.
2. Compute the common difference using the first two elements.
3. Traverse the array and compare differences of adjacent elements.
4. If any difference does not match, return `false`.
5. Otherwise, return `true`.

### Complexity
- **Time Complexity:** `O(n log n)`
- **Space Complexity:** `O(1)`

---

## Approach 2: Without Sorting (Using Min, Max & Set)

### Steps
1. Find the number of elements `n`.
2. Find the minimum and maximum elements.
3. If `(max - min) % (n - 1) != 0`, return `false`.
4. Compute common difference:
d = (max - min) / (n - 1)
5. Store all elements in a set.
6. For `i = 0` to `n - 1`, check if `min + i * d` exists in the set.
7. If any element is missing, return `false`.
8. Otherwise, return `true`.

### Complexity
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

---

## Comparison

| Approach | Sorting | Time | Space |
|--------|---------|------|-------|
| Sorting Based | Yes | O(n log n) | O(1) |
| Set Based | No | O(n) | O(n) |

---

## Visualization
<img width="1607" height="700" alt="image" src="https://github.com/user-attachments/assets/0f98282c-f043-47c1-804c-b9b5adbc7f25" />

---

## Author
**Aakash Kumar**  
LeetCode: https://leetcode.com/aakashkumar2005
