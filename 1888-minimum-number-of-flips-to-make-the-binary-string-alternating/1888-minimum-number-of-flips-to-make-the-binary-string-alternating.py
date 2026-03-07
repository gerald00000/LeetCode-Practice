class Solution:
    def minFlips(self, s: str) -> int:
        n = len(s)
        s = s + s
        target = "01" * n
        res = n
        cnt = 0

        for i in range(2 * n):
            if s[i] != target[i]: 
                cnt += 1
            
            if i >= n:
                if s[i - n] != target[i - n]:
                    cnt -= 1
            
            if i >= n - 1:
                res = min(res, cnt, n - cnt)

        return res
