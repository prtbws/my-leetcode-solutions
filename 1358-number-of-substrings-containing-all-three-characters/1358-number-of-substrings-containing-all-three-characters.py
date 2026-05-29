class Solution:
    def numberOfSubstrings(self, s: str) -> int:
        freq = {
            'a' : 0,
            'b' : 0,
            'c' : 0
        }

        i = 0
        ans = 0

        for j in range(len(s)):
            freq[s[j]] += 1
            while freq['a'] > 0 and freq['b'] > 0 and freq['c'] > 0:
                
                freq[s[i]] -= 1
                i+=1
            
            ans += i
        return ans
