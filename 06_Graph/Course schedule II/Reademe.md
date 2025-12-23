Course Schedule II

LeetCode Problem ID: 210
Difficulty: Medium
Topic: Graph, Topological Sort, BFS, DFS

Problem Overview

You are given numCourses courses labeled from 0 to numCourses - 1 and a list of prerequisite pairs.

Each pair [a, b] means:

To take course a, you must first complete course b.

Your task is to return a valid order in which all courses can be completed.

If it is impossible to complete all courses due to a cycle, return an empty array.

Key Insight

The problem is about dependency resolution

Courses form a Directed Graph

You must find a Topological Ordering

If a cycle exists, no valid order is possible

Graph Representation

Node: Course

Directed Edge: b → a (b must be done before a)

Approach (Topological Sort – Kahn’s Algorithm)

Build an adjacency list from prerequisites

Calculate in-degree of each course

Add all courses with in-degree = 0 to a queue

Process the queue:

Remove a course

Add it to the result

Reduce in-degree of its neighbors

If any neighbor becomes 0, push it to the queue

At the end:

If result size == numCourses → valid order

Else → cycle detected → return empty array

Why This Works

Courses with no prerequisites can be taken immediately

Removing them unlocks dependent courses

A cycle means at least one course can never reach in-degree = 0

Example

Input

numCourses = 4
prerequisites = [[1,0],[2,0],[3,1],[3,2]]


Output

[0,1,2,3]


(Other valid orders may also exist)

Edge Cases

No prerequisites → return all courses

Single course → return [0]

Cycle exists → return []

Time Complexity

O(V + E)

V = number of courses

E = number of prerequisites

Space Complexity

O(V + E)

Graph + in-degree array + queue

Concepts Used

Directed Graph

Topological Sorting

Breadth First Search (BFS)

In-degree tracking

What You Learn From This Problem

How to handle dependency-based scheduling

Detecting cycles in directed graphs

Practical application of topological sort
