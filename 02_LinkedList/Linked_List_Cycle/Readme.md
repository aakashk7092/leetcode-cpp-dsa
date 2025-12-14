# 141. Linked List Cycle

## Problem Statement
Given the head of a linked list, determine if the linked list has a cycle in it.  
A cycle exists if a node can be reached again by continuously following the `next` pointer.

---

## Example 1

**Input**
head = [3,2,0,-4], pos = 1

**Output**
true

---

## Observations
- Linked list nodes do not contain index information
- If we keep moving forward and reach `NULL`, no cycle exists
- If we keep visiting nodes infinitely, a cycle exists
- Extra space solutions exist, but optimal solution uses no extra memory

---

## Approach (Fast and Slow Pointers)

- Use two pointers:
  - `slow` moves one step at a time
  - `fast` moves two steps at a time
- Initially, both pointers start at the head
- Move pointers until:
  - `fast` or `fast->next` becomes `NULL` → no cycle
  - `slow == fast` → cycle detected

---

## Why This Works
- In a cyclic list, the fast pointer will eventually lap the slow pointer
- In a non-cyclic list, the fast pointer reaches the end first

---

## Time and Space Complexity
- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Key Insight
> If two pointers moving at different speeds ever meet, the linked list contains a cycle.

---

## Language Used
- C++
