class Solution:
    def differenceOfSums(self, n: int, m: int) -> int:
        summ=0 
        sum=0
        for i in range(1,n+1):
            if i%m==0:
                summ+=i
            else:
                sum+=i
        else:
            return(sum-summ)
        
