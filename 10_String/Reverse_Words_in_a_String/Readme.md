# 151. Reverse Words in a String

## Problem Statement
Given a string `s`, reverse the order of words in the string.  
A word is defined as a sequence of non-space characters.  
The returned string should have **only one space** between words and **no leading or trailing spaces**.

---

## Example 1

**Input**
s = "the sky is blue"

**Output**
"blue is sky the"

---

## Observations
- Extra spaces may appear at the beginning, end, or between words
- Multiple spaces should be reduced to a single space in the output
- Only the **order of words** is reversed, not the characters inside words

---

## Approach

- Traverse the string and extract words while skipping extra spaces
- Store each valid word
- Reverse the order of the collected words
- Join them using a single space

---

## Why This Works
- Skipping extra spaces ensures clean word extraction
- Reversing word order gives the required output format
- The logic directly follows the problem constraints

---

## Time and Space Complexity
- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

---

## Key Insight
> The problem is about reversing **words**, not characters, while carefully handling extra spaces.

---

## Language Used
- C++
