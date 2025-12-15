# Find Kth Bit in Nth Binary String

## Problem Statement
You are given two integers `n` and `k`.

Binary strings are defined as:
- `S₁ = "0"`
- `Sᵢ = Sᵢ₋₁ + "1" + reverse(invert(Sᵢ₋₁))` for `i > 1`

Your task is to return the **k-th bit (1-indexed)** in `Sₙ`.

---

## Key Observations
- Length of `Sₙ` is always `2ⁿ - 1`
- The **middle character** of every `Sₙ` is always `'1'`
- Left half of `Sₙ` is exactly `Sₙ₋₁`
- Right half is **reverse + inverted** version of `Sₙ₋₁`

---

## Optimized Recursive Approach
Instead of building the entire string:

- If `k` lies in the **left half** → directly move to `Sₙ₋₁`
- If `k` is exactly the **middle position** → answer is `'1'`
- If `k` lies in the **right half** → map it to the mirrored position in `Sₙ₋₁` and **invert** the result

This avoids unnecessary string construction and saves memory.

---

## Algorithm Steps
1. Base case: if `n == 1`, return `'0'`
2. Compute length: `length = 2ⁿ - 1`
3. Find middle position: `mid = ceil(length / 2)`
4. If `k < mid`, recurse on left half
5. If `k == mid`, return `'1'`
6. Else recurse on mirrored index and invert the result

---

## Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)` (recursive call stack)

---

## Example
**Input**
n = 4, k = 11
**Explanation**
- `length = 15`, `mid = 8`
- `k > mid`, so mirror index = `15 - (11 - 1) = 5`
- Recursively find bit at `(n-1, 5)` and invert it
