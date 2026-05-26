class Solution:
    def numberOfSpecialChars(self, word: str) -> int:
        
        lower = set()
        upper = set()
        for x in word:
            if 'a' <= x <= 'z':
                lower.add(x)
            else:
                upper.add(x.lower())
        ans = 0
        for x in lower:
            if x in upper:
                ans += 1

        return ans