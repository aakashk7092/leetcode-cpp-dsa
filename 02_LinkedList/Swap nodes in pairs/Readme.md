# Swap Nodes in Pairs (LeetCode – 24)

<p align="center">
  <img src="https://raw.githubusercontent.com/USERNAME/REPO_NAME/main/cover.png" width="100%">
</p>


---

## Problem Statement
Given the head of a singly linked list, swap every two adjacent nodes and return the modified list.

### Constraints
- You **must not modify node values**
- Only **node pointers** can be changed
- The list may have **even or odd** number of nodes

---

## Core Idea
Linked lists do not allow random access, so swapping values is not allowed.  
Instead, we **re-wire the `next` pointers** of nodes pair by pair.

A **dummy node** is used to:
- Handle head swapping safely
- Avoid edge-case complexity

---

## Visual Explanation

<p align="center">
  <img src="images/cover.png" width="100%">
</p>

<p align="center">
  <img src="images/swap_nodes_diagram.png" width="90%">
</p>


### Example
**Input**
1 → 2 → 3 → 4 → 5 → NULL

**Output**
2 → 1 → 4 → 3 → 5 → NULL

 If the list length is odd, the last node remains unchanged.

---

##  Step-by-Step Approach
1. Create a **dummy node** pointing to the head
2. Use a pointer to traverse the list
3. For every two adjacent nodes:
   - Swap their links
   - Move the pointer forward by two nodes
4. Continue until fewer than two nodes remain

---

##  Complexity Analysis

| Metric | Value |
|------|------|
| **Time Complexity** | `O(n)` |
| **Space Complexity** | `O(1)` |

---

##  Key Takeaways
- Strengthens **pointer manipulation skills**
- Demonstrates **dummy node usage**
- Builds foundation for advanced linked list problems

---

## tags
`Linked List` `Pointer Manipulation` `Iteration` `LeetCode`

---

## Related Problems
- Reverse Linked List  
- Reverse Nodes in K-Group  
- Swap Nodes in a Linked List  

---

