# Decode String (Recursive Approach)

## Problem Statement
You are given an encoded string `s`.

The encoding rule is:
k[encoded_string]
where the `encoded_string` inside the square brackets is repeated exactly `k` times.

Your task is to decode the string and return the final result.

---

## Key Observations
- Numbers can be **multi-digit**
- Encoded strings can be **nested**
- Order of characters must be preserved
- Index tracking is important while decoding

---

## Approach (Recursion)
Instead of using an explicit stack, we use recursion to decode the string.

### Core Idea
- Traverse the string character by character
- When a digit is found, build the repeat count
- On encountering `[`, recursively decode the substring
- On encountering `]`, return the decoded substring to the caller
- Use an index passed by **reference** to maintain position across recursive calls

---

## Algorithm Steps
1. Initialize an empty result string and a number variable
2. Loop through the string using an index
3. Build the number if digit is found
4. On `[`, recursively decode the inner substring
5. Append the decoded substring `num` times
6. On `]`, return the current result
7. Continue until the string is fully processed

---

## Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)` (due to recursion stack)

---

## Example
**Input**
"3[a2[c]]"

**Output**
"accaccacc"
