# Sum of Numbers With Exactly Four Divisors

This problem focuses on identifying numbers that have **exactly four positive divisors** and computing the sum of those divisors efficiently.

**Problem Reference:**  
https://leetcode.com/problems/four-divisors/

---

##  Approach

The key idea is to efficiently count the number of divisors for each number in the array without using brute force.

For every number:
- Iterate only up to its **square root** to find divisors.
- Whenever a divisor is found, its corresponding paired divisor is also considered.
- Maintain a running count of divisors and their sum.
- If the divisor count exceeds four at any point, the computation is stopped early for that number.
- Only numbers that end with **exactly four divisors** contribute their divisor sum to the final answer.

This method avoids unnecessary computations and ensures optimal performance within constraints.

---

## Time Complexity

- **Per number:** `O(√n)`  
- **Overall:** `O(n × √max(nums))`

Where `n` is the size of the input array.

---

##  Space Complexity

- **O(1)**  
Only constant extra space is used.

---

##  What I Learned from This Problem

- Efficient divisor counting using the **square root optimization**.
- The importance of **early termination** to improve runtime.
- How mathematical properties can significantly reduce brute-force approaches.
- Writing cleaner and more maintainable logic by separating validation and aggregation.
- Applying optimization techniques that are commonly useful in competitive programming and interviews.

---

##  Note

This solution is part of my **75 Days LeetCode Challenge**, where I focus on consistency, clean logic, and performance-oriented problem solving.
