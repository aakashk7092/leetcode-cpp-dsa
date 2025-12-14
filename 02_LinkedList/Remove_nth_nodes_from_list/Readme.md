# 19. Remove Nth Node From End of List

**Difficulty:** Medium  
**Topic:** Linked List, Two Pointers  
**LeetCode Link:** https://leetcode.com/problems/remove-nth-node-from-end-of-list/

---

## Problem Statement

Given the head of a singly linked list, remove the **n-th node from the end** of the list and return its head.

---

## Example

**Input**
head = [1,2,3,4,5], n = 2

**Output**
[1,2,3,5]

---

## Observations

- Removing the n-th node from the end is equivalent to removing the  
  `(length - n)`-th node from the start
- Deleting the **head node** is a special case and must be handled safely
- Using a **dummy node** simplifies edge cases

---

## Approach (Two-Pass with Dummy Node)

1. Create a dummy node pointing to the head
2. Traverse the list to find its length
3. Calculate the position `(length - n)`
4. Move a pointer from the dummy node to just before the node to be deleted
5. Adjust pointers to remove the node

---

## Time and Space Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Key Insight

> Using a dummy node makes deletion safe, even when the head node needs to be removed.

---

## Language Used

- C++
