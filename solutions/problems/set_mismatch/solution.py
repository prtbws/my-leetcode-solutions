class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:

        n = len(nums)

        exsum = n*(n+1)//2
        acsum = sum(nums)

        exsqsum = (n)*(n+1)*(2*n+1) // 6
        acsqsum = sum(x*x for x in nums)

        diff = acsum - exsum
        sqdiff = acsqsum - exsqsum

        sumxy= sqdiff//diff
        x = (diff + sumxy) // 2
        y = x - diff

        return [x,y]
        