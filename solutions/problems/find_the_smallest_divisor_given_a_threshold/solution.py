class Solution:
    def smallestDivisor(self, nums: List[int], threshold: int) -> int:

        l = 1
        h = max(nums)

        while l<h :

            m = (l+h)//2

            t = 0
            for n in nums :
                t += (n + m -1)//m
            
            if t>threshold :

                l = m+1

            else:
                h = m
        return l
        