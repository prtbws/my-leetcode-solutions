class Solution:
    def trap(self, height: List[int]) -> int:
        n = len(height)
        mx = 0
        mxi = -1

        for i in range(n):

            if height[i] > mx:
                mx = height[i]
                mxi = i
        water = 0
        h = 0
        for i in range(mxi+1):

            if height[i] > h:
                h = height[i]
            else:
                water += h-height[i]
        h = 0
        for i in range(n-1, mxi, -1):

            if height[i] > h:
                h = height[i]
            else:
                water += h-height[i]
        return water