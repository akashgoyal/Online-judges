# 151 - Reverse Words in a String

class Solution:
    def reverseWords(self, s: str) -> str:
        
        s_list = s.split()
        res = reversed(s_list)

        return " ".join(res)