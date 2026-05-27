class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        d = ""
        ans = 0
        for i in range(len(s)):
            if s[i] not in d:
                d += s[i]
            else:
                dub_idx = d.index(s[i])
                d = d[dub_idx + 1 : ] + s[i]
            ans = max(ans, len(d))
        return ans

