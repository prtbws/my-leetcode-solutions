class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        n = len(nums)
        i= 0
        z = 0
        ans = 0

        for j in range(n):

            if nums[j] == 0:
                z += 1
            
            while z > k:
                if nums[i] == 0:
                    z -= 1
                i+=1
            ans = max(ans, j-i+1)

        return ans