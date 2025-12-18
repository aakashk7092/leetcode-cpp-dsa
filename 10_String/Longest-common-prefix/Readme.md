# Longest Common Prefix (LeetCode)

## Problem

Given an array of strings, find the **longest common prefix** shared among all strings. If no common prefix exists, return an empty string.

---

## Approach

* Take the **first string** as the initial prefix.
* Compare this prefix with each remaining string.
* While the current string does not start with the prefix:

  * Shorten the prefix by removing the last character.
* If the prefix becomes empty, return an empty string.

---

## What I Learned

* Comparing strings efficiently using prefix checks
* Reducing the problem step-by-step instead of checking all characters
* Handling edge cases like empty input or no common prefix

---

## Complexity

* **Time:** `O(n × m)` where `n` is number of strings and `m` is prefix length
* **Space:** `O(1)`
