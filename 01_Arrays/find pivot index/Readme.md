# Easy | 724 | Find Pivot Index 
---
# Problem statement:-
<img width="1568" height="696" alt="image" src="https://github.com/user-attachments/assets/f56ef42d-7414-4c06-9b72-ecddefcea2bd" />
Note: This question is the same as 1991: https://leetcode.com/problems/find-the-middle-index-in-array/
---
## Approach of problem
-> Find sum of all element sum (O(n))
----
-> take leftSum = 0 ,
---
-> traversing array find rightSum = sum - leftSum - nums[i]
---
->if leftSum == rightSum  return index
---
-> update leftSum += nums[i]
---

**Time complexity** - **O(n)**
---
**Space Complexity** - **O(1)** used only result array
