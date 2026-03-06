class Solution:
    def checkOnesSegment(self, s: str) -> bool:
        n = len(s)
        check = False
        for i in range(n):
            if check:
                if s[i] == '1':
                    return False
            elif s[i] == '0':
                check = True

        return True