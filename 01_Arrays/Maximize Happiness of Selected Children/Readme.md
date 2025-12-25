# Maximum Happiness Sum (Greedy)

## Problem Statement
You are given an integer array `happiness`, where each element represents the happiness value of a child.  
You are allowed to select **exactly `k` children**.

Rules:
- When selecting a child, their happiness is reduced by the number of children already selected.
- Happiness values cannot be negative.
- Your goal is to **maximize the total happiness sum**.

---

## Approach (Greedy)

To maximize the total happiness:
1. Sort the `happiness` array in **descending order**
2. Select the top `k` elements
3. For the `i-th` selected child, reduce happiness by `i`
4. Add the value only if it remains positive

This greedy strategy works because selecting higher happiness values earlier minimizes the impact of future reductions.

---

## Algorithm
1. Sort the array in descending order
2. Initialize `ans = 0`
3. For `i` from `0` to `k-1`:
   - `effectiveHappiness = happiness[i] - i`
   - If `effectiveHappiness > 0`, add it to `ans`
4. Return `ans`

---

## Example

**Input**
happiness = [5, 4, 3]
k = 2

**Processing**
- First pick: 5 - 0 = 5
- Second pick: 4 - 1 = 3

**Output**
8

---

## Complexity Analysis

- **Time Complexity:** `O(n log n)` (sorting)
- **Space Complexity:** `O(1)` (in-place computation)

---

## Key Takeaways
- Greedy selection ensures optimal results
- Sorting helps prioritize high-value elements
- Always guard against negative contributions
- Use `long long` to avoid overflow in large inputs

---

## Tags
Greedy Sorting Arrays Optimization

---

### Author
Aakash Kumar  
(B.Tech | DSA & C++)
