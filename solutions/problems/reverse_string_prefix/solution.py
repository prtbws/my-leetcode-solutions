class Solution:
    def reversePrefix(self, s: str, k: int) -> str:
        a = list(s[:k])
        a.reverse()
        return ''.join(a) + s[k:]