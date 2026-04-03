class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:

        snums = sorted(nums)
        rank = {}

        for i,num in enumerate(snums):

            if num not in rank:
                rank[num] = i
            
        return [rank[num] for num in nums]  
        