# Number of Smooth Descent Periods of a Stock

## Problem Statement
You are given an array `prices` where `prices[i]` represents the stock price on the `i-th` day.

A **smooth descent period** is a contiguous subarray where:
- The length is at least 1
- Each next element is exactly **1 less** than the previous element

Your task is to return the **total number of smooth descent periods**.

---

## Key Points
- Every single element is a valid smooth descent period
- A descent continues only if `prices[i] = prices[i-1] - 1`
- Once the condition breaks, a new descent period starts

---

## Approach
- Traverse the array once
- Maintain a variable to track the current descent length
- Add the current length to the answer at each step

---

## Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Example
**Input**
prices = [3, 2, 1, 4]

**Output**
7

**Explanation**
Valid smooth descent periods are:
[3], [2], [1], [4]
[3,2], [2,1]
[3,2,1]
