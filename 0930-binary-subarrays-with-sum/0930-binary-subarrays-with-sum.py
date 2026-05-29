class Solution:
    def atMost(self, nums, goal):
        if goal < 0:
            return 0
            
        i =0
        n = len(nums)
        s = 0
        ans = 0
        for j in range(n):

            s += nums[j]
            
            while s > goal:

                if nums[i] == 1:
                    s -=1
                i+=1
            ans += j-i+1

        return ans

    def numSubarraysWithSum(self, nums: List[int], goal: int) -> int:
        return self.atMost(nums, goal) - self.atMost(nums, goal-1)