# 125. Valid Palindrome

Given a string `s`, determine whether it is a palindrome by considering only alphanumeric characters and ignoring case differences. A palindrome is a string that reads the same forward and backward after removing all non-alphanumeric characters and converting all letters to lowercase.

Input  
s = "A man, a plan, a canal: Panama"

Output  
true

Input  
s = "race a car"

Output  
false

To solve this problem, we use the two-pointer technique. One pointer starts from the beginning of the string and the other starts from the end. The idea is to compare characters from both ends while moving inward.

First, we check whether the character at the left pointer is alphanumeric. If it is not, we skip it and move the left pointer forward. Similarly, if the character at the right pointer is not alphanumeric, we skip it and move the right pointer backward.

When both pointers are pointing to valid alphanumeric characters, we convert both characters to lowercase and compare them. If the characters do not match at any point, the string cannot be a palindrome and we return false immediately.

If the characters match, both pointers are moved inward. This process continues until the left pointer crosses the right pointer. If no mismatch is found during this traversal, the string is a valid palindrome.

Each character in the string is visited at most once, which makes this approach efficient.

Time Complexity: O(n), where n is the length of the string  
Space Complexity: O(1), as no extra space is used

Key Insight:  
The two-pointer approach allows us to efficiently compare characters from both ends while skipping unnecessary characters, making it ideal for palindrome validation problems.

Language Used:  
C++
