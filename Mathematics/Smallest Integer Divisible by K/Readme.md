# Smallest Integer Divisible by K

## Problem
Given an integer `k`, find the **smallest positive integer** that:
- Contains only the digit **1**
- Is **divisible by `k`**

Return the **length** of that integer.  
If no such integer exists, return `-1`.

---

## Example

**Input**
k = 3

**Output**
3

**Explanation**
111 % 3 = 0

---

## Important Observations
- If `k` is divisible by **2 or 5**, the answer is always `-1`
- A number made only of digit `1` never ends with `0` or `5`
- The actual number can be extremely large, so it should **not** be constructed explicitly

---

## Approach (Modulo Simulation)

### Idea
Instead of building the number (`1`, `11`, `111`, ...), track only the **remainder**.

If at any point the remainder becomes `0`, the number is divisible by `k`.

### Formula
remainder = (remainder * 10 + 1) % k
---

## Algorithm Steps
1. If `k % 2 == 0` or `k % 5 == 0`, return `-1`
2. Initialize `remainder = 0`
3. Iterate from `1` to `k`:
   - Update remainder using modulo formula
   - If remainder becomes `0`, return current length
4. If no remainder becomes `0`, return `-1`

---
# Complexity Analysis

**Time Complexity: O(k)**

**Space Complexity: O(1)**
