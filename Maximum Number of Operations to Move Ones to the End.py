class Solution:
    def maxOperations(self, s: str) -> int:
        ones = 0
        res = 0
        n = len(s)

        for i, ch in enumerate(s):
            if ch == '1':
                ones += 1
            else:  # ch == '0'
                # start of a zero-block: previous char is not '0' (or i == 0)
                if i == 0 or s[i - 1] == '1':
                    res += ones
        return res
