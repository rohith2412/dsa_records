"""
q)Concatenation of Array

Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).
Specifically, ans is the concatenation of two nums arrays.

Return the array ans.

Example 1:
Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]

"""

class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        ans = []
        for i in range(2):
            for n in nums:
                ans.append(n)
        return ans
    
#explanation of the code
#1. We initialize an empty list ans to store the concatenated result.
#2. We use a loop that runs twice (for i in range(2)) cause once the first assray is added we need to add it again.
#3. Inside this loop, we iterate through each element n in the input list nums.
#4. For each element n, we append in realy simple terms add it to the ans list.
#5. After both iterations are complete, we return the ans list which now contains the concaten
#6. The time complexity of this solution is O(n), where n is the length of the input list nums, since we are iterating through the list twice.
#7. The space complexity is O(n) as well, since we are creating a new