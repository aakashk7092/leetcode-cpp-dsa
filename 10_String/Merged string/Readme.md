# Merge Strings Alternately

## Problem Overview

You are given two strings **word1** and **word2**.  
Your task is to merge the strings by **alternating characters** from each string, starting with `word1`.

- If one string is longer than the other, append the remaining characters at the end
- Return the merged string

---

## Example 1

Input:
word1 = "abc"
word2 = "pqr"

Output:
"apbqcr"

---

## Key Insight

- Use **two pointers** to traverse both strings
- Add characters alternately while both strings have characters left
- Append remaining characters once one string is exhausted

---

## Optimized Approach

1. Initialize two pointers `i` and `j` for `word1` and `word2`
2. While both pointers are within bounds:
   - Append `word1[i]`
   - Append `word2[j]`
3. Append the remaining substring (if any) from `word1`
4. Append the remaining substring (if any) from `word2`

This ensures all characters are included correctly.

---

## Algorithm Steps

- Initialize an empty result string
- Traverse both strings simultaneously
- Merge characters alternately
- Append leftover characters
- Return the final merged string

---

## Time Complexity

- **O(n + m)**  
  Where `n` is the length of `word1` and `m` is the length of `word2`

---

## Space Complexity

- **O(n + m)**  
  Required to store the merged result string

---

## Why This Approach?

- Simple and readable
- Uses constant extra variables
- Efficient and optimal
- Common interview-friendly solution

---

## Reference

- LeetCode Problem 1768: Merge Strings Alternately

---

### Author

**Aakash Kumar**  
B.Tech Student | Data Structures & Algorithms
