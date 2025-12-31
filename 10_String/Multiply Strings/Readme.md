# Multiply Strings

## Problem Overview

You are given two non-negative integers represented as strings `num1` and `num2`.  
Your task is to return the **product of these two numbers**, also represented as a string.

### Constraints
- The numbers can be very large
- You are **not allowed** to convert the strings directly to integers
- You must perform multiplication manually

---

## Example 1
Input:
num1 = "123", num2 = "456"

Output:
"56088"

---

## Key Insight

- Direct integer conversion is not allowed due to size constraints
- We simulate **manual multiplication** (as done on paper)
- The maximum length of the result is `n + m`, where:
  - `n` = length of `num1`
  - `m` = length of `num2`

---

## Approach Explanation

1. If either number is `"0"`, return `"0"`
2. Create an integer array of size `n + m` to store intermediate results
3. Multiply digits from right to left
4. Add carry to the appropriate position
5. Convert the result array into a string
6. Remove leading zeros

---

## Algorithm Steps

- Initialize a result array with size `n + m`
- For each digit in `num1` (right to left):
  - For each digit in `num2` (right to left):
    - Multiply digits
    - Add to the correct index
    - Handle carry properly
- Build the final string while skipping leading zeros
- Return the resulting string

---

## Time Complexity

Let:
- `n` = length of `num1`
- `m` = length of `num2`
- Time Complexity: O(n × m)
- 
---

## Space Complexity

Space Complexity: O(n + m)

Used to store the intermediate multiplication results.

---

## Why This Approach?

- Does not rely on big integer libraries
- Accurately simulates manual multiplication
- Handles large numbers safely
- Fully compliant with problem constraints

---

## Reference

- LeetCode Problem 43: Multiply Strings

---

### Author

**Aakash Kumar**  
B.Tech Student | Data Structures & Algorithms




