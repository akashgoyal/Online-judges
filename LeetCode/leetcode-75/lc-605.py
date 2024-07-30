# 605. Can Place Flowers 

class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        cnt, sz = 0, len(flowerbed)
        for i in range(sz):
            if flowerbed[i]==0:
                lp = (i==0) or (flowerbed[i-1]==0)
                rp = (i==sz-1) or (flowerbed[i+1]==0)

                if lp and rp:
                    flowerbed[i]=1
                    cnt += 1

        return cnt >= n
    
    