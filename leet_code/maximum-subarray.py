'''
Given an integer array nums, find the 
subarray
 with the largest sum, and return its sum.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.

'''

from typing import List

class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        ans = nums[0]
        sub_arr = nums[0]
        for i in range(1,len(nums)):
            sub_arr = max(nums[i],nums[i]+ sub_arr)
            ans = max(ans,sub_arr)
        return ans
    # def maxSubArray(self, nums: List[int]) -> int:
    #     far = 0
    #     end = 0
    #     for i in range(len(nums)):
    #         end += nums[i]
    #         if end > far:
    #             far = end
    #         if end < 0:
    #             end = 0
    #     return far
        