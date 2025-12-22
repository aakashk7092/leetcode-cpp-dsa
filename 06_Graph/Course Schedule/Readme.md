LeetCode ID: 207  
Difficulty: Medium  
Topic: Graph / Topological Sort  

---

### Intuition
Courses and prerequisites can be represented as a directed graph.  
If the graph contains a cycle, it is not possible to complete all courses.

---
A valid topological order exists, so all courses can be completed.

---

### Approach
- Treat each course as a node
- Treat each prerequisite as a directed edge
- Apply cycle detection or topological sorting
- If a cycle is detected, return false

---

### Complexity Analysis
Time Complexity : O(V + E)
Space Complexity : O(V + E)
