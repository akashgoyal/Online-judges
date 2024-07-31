# 345. Reverse Vowels of a String

class Solution:
    def reverseVowels(self, s: str) -> str:
        n = len(s)
        slist = list(s)
        st, en = 0, n-1
        vowels = set("aeiouAEIOU")

        while st < en:
            while st<n and slist[st] not in vowels:
                st += 1
            while en>-1 and slist[en] not in vowels:
                en -= 1

            if st < en:
                slist[st], slist[en] = slist[en], slist[st]
                en -= 1
                st += 1
        
        return "".join(slist)