class Solution:
    def numberOfSpecialChars(self, word: str) -> int:
        li = {}
        ui = {}

        for i in range(len(word)):
            if word[i].islower():
                li[word[i]] = i
            else:
                if word[i].lower() not in ui:
                    ui[word[i].lower()] = i

        ans = 0
        for c in ui:
            if c in li and ui[c] > li[c]:
                ans += 1
        return ans
