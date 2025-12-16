# Invert Binary Tree

## Problem Overview
Invert a binary tree by swapping the left and right children of every node.

This problem tests understanding of:
- Tree traversal
- Recursion vs Iteration
- Binary tree fundamentals

---

## Key Idea
At each node:
- Swap left and right child
- Apply the same operation to both subtrees

The operation continues until all nodes are processed.

---

## Approaches Used

### 1. Recursive Approach
- Swap children of the current node
- Recursively invert left and right subtrees
- Natural fit due to tree’s recursive structure

### 2. Iterative Approach (BFS)
- Traverse the tree level by level using a queue
- Swap children for each visited node
- Avoids deep recursion

---

## Complexity Analysis
| Approach     | Time Complexity | Space Complexity |
|--------------|-----------------|------------------|
| Recursive    | O(n)            | O(h)             |
| Iterative    | O(n)            | O(n)             |

- `n` = number of nodes  
- `h` = height of the tree

---

## Why This Problem Matters
- Frequently asked in coding interviews
- Tests core tree concepts
- Simple logic with clean implementation

---

## Tags
`Binary Tree` `Recursion` `BFS` `DFS` `Tree Traversal` `Interview Question`

---

## Author
**Aakash Kumar**  
Aspiring Software Engineer | DSA & Competitive Programming
