<img width="1607" height="700" alt="image" src="https://github.com/user-attachments/assets/0f98282c-f043-47c1-804c-b9b5adbc7f25" />
-----
# Appraoch 1 :
-----------------------------------------------------------------------------------------------------------------------
Sort array
find Common Difference
Traverse the array and find adjacent elements diff after that campare with common difference
if Common differnce not eqaul to adjcebt elements , **return false**
other after loop , **return true**
**Time complexity is O(nlog(n))**
**Space complexity is O(1)**
-----------------------------------------------------------------------------------------------------------------------
# Approach 2 :
-----------------------------------------------------------------------------------------------------------------------
find total number of element
max element from array and find min element too
take diff of max - min
if max - min % with n-1 != 0
find common difference d by using  => d = (max-min)/(n-1)
.its means it not sequance can not make arithmetic sequnce **return false**
strore all element of array in set
run a loop from 0  to 1 finding each element of sequence
 ->by the formula = min*i+d
  and find out in set if not found **return false**
after loop **return true**

**Time complexity is O(n)**
**Space complexity is O(n)**
