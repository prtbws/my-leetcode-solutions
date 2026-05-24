class Solution:
    def nextGreaterElements(self, nums: List[int]) -> List[int]:
        n = len(nums)
        st = []
        ans = [-1]*n
        
        for i in range(2*n):

            while st and nums[st[-1]] < nums[i%n]:
                ans[st.pop()] = nums[i%n]
            
            if i < n:
                st.append(i)
        return ans
        