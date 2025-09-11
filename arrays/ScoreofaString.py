"""
Q) score of a string 

You are given a string s. The score of a string is defined as the sum of the absolute difference between the ASCII values of adjacent characters.
Return the score of s.

Example 1:  
Input: s = "abc"
Output: 2

"""

class Solution:
    def scoreOfString(self, s: str) -> int:
        res = 0 

        for i in range(len(s) - 1):
            res += abs(ord(s[i]) - ord(s[i + 1])) #ord = gives the ASCII value of a character, abs = removes negative sign
        return res
        
#explanation of the code
#1. We initialize a variable res to store the score of the string.
#2. We loop through the string from the first character to the second last character.
#3. For each character, we calculate the absolute difference between its ASCII value and the ASCII value of the next character using the ord() function.
#4. We add this absolute difference to res.
#5. Finally, we return the total score stored in res.
#6. The time complexity of this solution is O(n), where n is the length of the string, since we are iterating through the string once. 
#7. The space complexity is O(1) as we are using a constant amount of extra space.