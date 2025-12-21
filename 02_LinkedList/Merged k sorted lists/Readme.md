# Merge k Sorted Lists

LeetCode #23 | Hard | Linked List | Divide and Conquer
# Approach of problem
<img width="1536" height="1024" alt="image" src="https://github.com/user-attachments/assets/416c1d19-c76e-4698-912d-b916094ff442" />
--
# Why This Approach is Optimal

Reduces total comparisons

Avoids repeated merging of large lists

Leverages the fact that each list is already sorted

Scales well even when k is large

# Complexity Analysis
Metric	Value
Time Complexity	O(N log K)
Space Complexity	O(log K) (recursive stack)

Where:

N = total number of nodes across all lists

K = number of linked lists

# Edge Cases Considered

No lists provided (lists = [])

Lists containing empty lists ([[]])

Single linked list

Lists with negative values

Uneven list sizes

# What This Problem Teaches

Applying Divide and Conquer beyond arrays

Efficient merging of multiple sorted structures

Writing scalable recursive solutions

Handling complex edge cases cleanly
