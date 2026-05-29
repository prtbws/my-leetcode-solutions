class Solution:
    def minElement(self, nums: List[int]) -> int:
        ans = 10**9

        for x in nums:

            sum = 0

            while x:
                sum += x%10
                x//=10
            
            ans = min(ans, sum)

        return ans


