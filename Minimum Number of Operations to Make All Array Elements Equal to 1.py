
from math import gcd

class Solution:
    def minOperations(self, nums):
        n = len(nums)
        
        # Case 1: Already has ones
        ones = nums.count(1)
        if ones > 0:
            return n - ones

        # Case 2: Try to create the first 1
        min_len = float('inf')
        for i in range(n):
            g = nums[i]
            for j in range(i + 1, n):
                g = gcd(g, nums[j])
                if g == 1:
                    min_len = min(min_len, j - i + 1)
                    break  # no need to expand further once GCD = 1

        # If never found subarray with GCD = 1 → impossible
        if min_len == float('inf'):
            return -1

        # Operations: (min_len - 1) to make one '1', then (n - 1) to spread
        return (min_len - 1) + (n - 1)
