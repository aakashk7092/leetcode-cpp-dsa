# 2147. Number of Ways to Divide a Long Corridor

**Difficulty:** Hard  
**Topic:** String, Prefix Sum, Combinatorics  
**LeetCode Link:** https://leetcode.com/problems/number-of-ways-to-divide-a-long-corridor/

---

## Problem Statement

You are given a string `corridor` consisting of characters:
- `'S'` representing a **seat**
- `'P'` representing a **plant**

The corridor needs to be divided into **sections** using vertical dividers such that:
- Each section contains **exactly two seats**
- Any number of plants can be present in a section

Return the **number of ways** to divide the corridor.  
Since the answer can be large, return it **modulo 10⁹ + 7**.

---

## Input

- `string corridor`

---

## Output

- An integer representing the number of valid ways to divide the corridor

---

## Example 1

**Input**
corridor = "SSPPSPS"

**Output**
3

---

## Constraints

- `1 ≤ corridor.length ≤ 10^5`
- `corridor[i]` is either `'S'` or `'P'`

---

## Key Observations

- The total number of seats **must be even**
- If total seats are `0` or odd, the answer is `0`
- Every valid section must contain **exactly two seats**
- Between every pair of seat-groups, plants create multiple possible divider positions

---

## Approach

- Traverse the corridor and count seats
- Group seats into pairs
- For each pair (except the last):
  - Count the number of plants between the current pair and the next pair
  - Multiply the number of choices (`plants + 1`) to the result
- Take modulo at each step

This works because each plant gap provides an independent choice for placing dividers.

---

## Time and Space Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

---

## Language Used

- C++
