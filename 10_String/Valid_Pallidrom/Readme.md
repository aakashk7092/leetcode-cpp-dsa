# 125. Valid Palindrome

Check whether a given string is a palindrome by considering only alphanumeric characters and ignoring case.

Input  
s = "A man, a plan, a canal: Panama"

Output  
true

Input  
s = "race a car"

Output  
false

Key Points

• Only letters (a–z, A–Z) and digits (0–9) matter  
• Uppercase and lowercase characters are treated the same  
• Special characters and spaces are ignored  

Approach (Two Pointers)

• Use two pointers:  
  – Left pointer starts from beginning  
  – Right pointer starts from end  

• If left character is not alphanumeric → move left forward  
• If right character is not alphanumeric → move right backward  

• Compare lowercase(left) and lowercase(right)  
• If mismatch → return false  
• If match → move both pointers inward  

• If pointers cross without mismatch → palindrome is valid  

Why This Works

• Each character is checked at most once  
• No extra string or array is created  
• Works efficiently even for large strings  

Time Complexity  
O(n)

Space Complexity  
O(1)

Key Insight  
Two pointers + character filtering = fast and memory-efficient palindrome check

Language Used  
C++
