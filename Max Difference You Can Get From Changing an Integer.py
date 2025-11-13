class Solution:
    def maxDiff(self, num: int) -> int:
        s = list(str(num))
        
        # ---- Find max ----
        max_s = s[:]
        for ch in s:
            if ch != '9':
                max_s = [ ('9' if c == ch else c) for c in s ]
                break
        a = int(''.join(max_s))
        
        # ---- Find min ----
        min_s = s[:]
        if s[0] != '1':
            ch = s[0]
            min_s = [ ('1' if c == ch else c) for c in s ]
        else:
            for ch in s[1:]:
                if ch not in ['0', '1']:
                    min_s = [ ('0' if c == ch else c) for c in s ]
                    break
        b = int(''.join(min_s))
        
        return a - b
