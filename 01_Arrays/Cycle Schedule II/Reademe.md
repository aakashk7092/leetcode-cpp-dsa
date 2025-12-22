# Course Schedule II – Topological Sort (DFS)
# Problem Overview

**You are given n courses and a list of prerequisite pairs.**
**Each pair [v, u] means course u must be completed before course v.**

**The task is to return a valid order in which all courses can be completed.**
**If it is not possible due to a cycle in dependencies, return an empty array.**

# This is a directed graph problem.

**Concepts Used**

Directed Graph

Depth First Search (DFS)

Cycle Detection

Topological Sorting

Recursion Stack

Key Observations

A cycle in a directed graph means no valid ordering exists

Topological sorting is possible only for acyclic graphs

DFS helps detect cycles using the recursion stack

Nodes are added to the order only after all dependencies are processed

# Approach
**Step 1: Graph Construction**

Convert the prerequisite list into an adjacency list

For each pair [v, u], add an edge u → v

Step 2: Cycle Detection using DFS

Maintain two arrays:

visited: marks nodes already visited

recPath: marks nodes in the current DFS path

If a node is visited again while still in the recursion path, a cycle exists

**Step 3: Topological Sort using DFS**

Perform DFS on each unvisited node

After exploring all neighbors, push the node onto a stack

The stack order gives the required course sequence

Algorithm Summary

Build the adjacency list

Run DFS to check for cycles

If a cycle is found, return an empty array

Perform DFS again to generate topological order

Pop elements from the stack to form the final answer

# Time and Space Complexity

**Time Complexity: O(V + E)**
**Space Complexity: O(V + E)**

Where:

V is the number of courses

E is the number of prerequisite relationships

# Why This Solution Works

Efficient for large inputs

Clearly separates cycle detection and ordering logic

Commonly used and accepted in interviews

Avoids unnecessary recomputation

# Key Takeaway

Topological sorting is valid only when the directed graph contains no cycle.
DFS with a recursion stack is a reliable method for detecting such cycles.

# Use Cases

Course scheduling systems

Dependency resolution problems

Interview preparation for graph algorithms

Competitive programming
