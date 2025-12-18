# Add Two Numbers (LeetCode)

## Problem Summary

Two non-empty linked lists represent two non-negative integers in **reverse order**. Each node contains a single digit. Add the two numbers and return the result as a linked list, also in reverse order.

---

## Approach

* Use a **dummy node** to build the result linked list.
* Traverse both linked lists simultaneously.
* Add corresponding digits along with a **carry**.
* Store `sum % 10` in a new node and update `carry = sum / 10`.
* Continue until both lists and carry are exhausted.

---

## What I Learned

* Practical use of **linked list traversal**
* Handling **carry propagation** cleanly
* Importance of a **dummy node** to simplify logic
* Managing linked lists of **unequal lengths**

---

## Complexity

* **Time:** `O(max(n, m))`
* **Space:** `O(max(n, m))`

---

## Key Takeaway

A classic problem that combines basic arithmetic with linked list manipulation, emphasizing clean traversal and edge-case handling.
