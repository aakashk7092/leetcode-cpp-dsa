# Divide Two Integers (LeetCode – 29)

## Problem Description
Given two integers `dividend` and `divisor`, divide two integers **without using**
multiplication, division, or modulo operators.

The integer division should truncate toward zero.

Return the quotient after dividing `dividend` by `divisor`.

---

## Important Constraints
- You are not allowed to use `*`, `/`, or `%`
- The result must fit in a **32-bit signed integer**
- If the result overflows, return `2^31 - 1`

---

## Key Observations
- Division can be done using **repeated subtraction**, but that is too slow
- A faster approach uses **bit manipulation**
- We can subtract large multiples of the divisor using **left shifts**
- Handle sign separately to simplify logic

---

## Approach (Bit Manipulation)

1. Handle the overflow case:
   - If `dividend = -2^31` and `divisor = -1`, return `2^31 - 1`
2. Determine the sign of the result
3. Work with absolute values of `dividend` and `divisor`
4. Repeatedly subtract the largest shifted divisor from the dividend
5. Accumulate the quotient using powers of two
6. Apply the sign to the final result

---

## Example

### Input
dividend = 10
divisor = 3

### Output
3

Explanation:
Overflow case, so return maximum 32-bit integer value.

---

## Complexity Analysis

| Metric | Complexity |
|------|------------|
| Time Complexity | O(log n) |
| Space Complexity | O(1) |

---

## What This Problem Teaches
- Handling integer overflow safely
- Using bit manipulation for optimization
- Implementing division logic without arithmetic operators
- Writing efficient low-level logic

---

## Related Problems
- Pow(x, n)
- Sum of Two Integers
- Bitwise AND of Numbers Range

---

## Notes
This is a classic interview problem that tests understanding of
binary representation and edge-case handling.
