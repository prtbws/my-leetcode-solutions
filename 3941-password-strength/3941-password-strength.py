class Solution:
    def passwordStrength(self, password: str) -> int:
        p= 0
        s = ""
        for x in password:

            if x >= 'a' and x <= 'z' and x not in s:
                p += 1
                s += x

            elif 'A' <= x <= "Z" and x not in s:
                p+=2
                s += x
            elif '0' <= x <= '9' and x not in s:
                p+=3
                s+= x

            elif x in "!@#$" and x not in s:
                p+=5
                s += x
                
        return p