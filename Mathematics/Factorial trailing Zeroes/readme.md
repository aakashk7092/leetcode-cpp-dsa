# Factorial Trailing Zeroes

## Problem
Given an integer `n`, determine the number of trailing zeroes in `n!`.

---

## Key Idea
A trailing zero is created by the multiplication:
10 = 2 × 5

In a factorial:
- Factors of `2` are always sufficient
- Factors of `5` are limited

Therefore, the number of trailing zeroes depends on how many times the factor `5` appears in numbers from `1` to `n`.

---

## Approach
- Count how many numbers are divisible by `5`
- Count extra factors of `5` from multiples of `25`, `125`, etc.
- Sum all such contributions

---

## Time Complexity
- **O(log n)**  
  Each division by `5` reduces `n` exponentially.

---

## Space Complexity
- **O(1)**  
  Only a constant amount of extra space is used.

---

## Takeaway
- Direct factorial computation is inefficient and unsafe
- Counting factors of `5` is the optimal solution
- This approach is standard in interviews and competitive programming

---

### Author
Aakash Kumar
