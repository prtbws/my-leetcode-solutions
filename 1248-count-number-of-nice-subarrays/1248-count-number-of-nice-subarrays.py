class Solution:
    def atMost(self, nums, k):
        i = 0
        ans= 0
        c= 0
        for j in range(len(nums)):

            if nums[j]%2 == 1:
                c += 1

            while c > k:
                if nums[i]%2 == 1:
                    c -= 1
                i+=1
            
            ans += j-i+1
        
        return ans

    def numberOfSubarrays(self, nums: List[int], k: int) -> int:
        return self.atMost(nums, k) - self.atMost(nums, k-1)
        