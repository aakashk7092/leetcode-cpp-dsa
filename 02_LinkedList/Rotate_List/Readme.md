# 61. Rotate List

**Difficulty:** Medium  
**Topic:** Linked List  
**LeetCode Link:** https://leetcode.com/problems/rotate-list/

---

## Problem Statement

Given the head of a singly linked list, rotate the list to the right by `k` places.

---

## Example

**Input**
head = [1,2,3,4,5], k = 2

**Output**
[4,5,1,2,3]


---

## Observations

- Rotating right by `k` means the **last `k` nodes come to the front**
- If `k` is greater than the length of the list, rotation repeats
- So we optimize using:  
  `k = k % length`

---

## Approach

1. Handle edge cases:
   - Empty list
   - Single node
   - `k = 0`
2. Traverse the list to find:
   - Length of the list
   - Last node (tail)
3. Connect tail to head to form a **circular list**
4. Find the new tail at position `(length - k - 1)`
5. New head is `newTail->next`
6. Break the circle to restore a normal list

---

## Time and Space Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Key Insight

> Converting the list into a circular list makes rotation simple —  
> just cut the circle at the correct position.

---

## Language Used

- C++
