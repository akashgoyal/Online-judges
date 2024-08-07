# 1071. Greatest Common Divisor of Strings

class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        
        def gcd(a,b):
            while b:
                a,b = b, a%b
            return a

        if str1+str2 != str2+str1:
            return ""

        res = gcd(len(str1), len(str2))

        return str1[:res]