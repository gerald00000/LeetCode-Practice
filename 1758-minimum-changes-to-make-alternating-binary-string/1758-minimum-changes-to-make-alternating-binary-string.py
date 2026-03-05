class Solution:
    def minOperations(self, s: str) -> int:
        n = len(s)
        if s[0] == '0':
            ans1 = 0
            ans2 = 1
        if s[0] == '1':
            ans1 = 1
            ans2 = 0
        back1 = '0'
        back2 = '1'
        for i in range(1, n):
            if back1 == '0':
                if s[i] == '0':
                    ans1 += 1
                back1 = '1'
            elif back1 == '1':
                if s[i] == '1':
                    ans1 += 1
                back1 = '0'
            if back2 == '0':
                if s[i] == '0':
                    ans2 += 1
                back2 = '1'
            elif back2 == '1':
                if s[i] == '1':
                    ans2 += 1
                back2 = '0'

        return min(ans1, ans2)