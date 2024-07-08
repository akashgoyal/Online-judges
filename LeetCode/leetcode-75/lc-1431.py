# 1431: Kids With the Greatest Number of Candies

from typing import List

class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        
        n = len(candies)
        maxc = max(candies)
        res = [False]*n

        for i in range(n):
            if candies[i]+extraCandies >= maxc:
                res[i]=True

        return res