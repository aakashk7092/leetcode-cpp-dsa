# 14. Longest Common Prefix

**Difficulty:** Easy  
**Topic:** String  
**LeetCode Link:** https://leetcode.com/problems/longest-common-prefix/

---

## Problem Statement

Write a function to find the **longest common prefix string** amongst an array of strings.

If there is no common prefix, return an **empty string** `""`.

---

## Input

- `vector<string> strs`

---

## Output

- A string representing the longest common prefix

---

## Example 1

**Input**
strs = ["flower","flow","flight"]

**Output**
"fl"


## Example 2

**Input**
strs = ["dog","racecar","car"]


**Output**
""

**Explanation**  
There is no common prefix among the input strings.

---

## Constraints

- `1 ≤ strs.length ≤ 200`
- `0 ≤ strs[i].length ≤ 200`
- `strs[i]` consists of lowercase English letters

---

## Approach

- Take the **first string** as the initial prefix
- Compare this prefix with each subsequent string
- Reduce the prefix length until it matches the beginning of the current string
- If the prefix becomes empty, return `""`

This approach is simple, efficient, and easy to implement.

---

## Time and Space Complexity

- **Time Complexity:** O(n × m)  
  where `n` is the number of strings and `m` is the length of the prefix
- **Space Complexity:** O(1)

---

## Language Used

- C++
