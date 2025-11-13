class Solution:
    def countGoodArrays(self, n: int, m: int, k: int) -> int:
        MOD = 10**9 + 7

        # Precompute factorials and inverses for nCr
        fact = [1] * (n)
        for i in range(1, n):
            fact[i] = (fact[i - 1] * i) % MOD

        inv_fact = [1] * (n)
        inv_fact[-1] = pow(fact[-1], MOD - 2, MOD)
        for i in range(n - 2, -1, -1):
            inv_fact[i] = (inv_fact[i + 1] * (i + 1)) % MOD

        def nCr(N, R):
            if R < 0 or R > N:
                return 0
            return fact[N] * inv_fact[R] % MOD * inv_fact[N - R] % MOD

        # Formula: m * C(n-1, k) * (m-1)^(n-k-1)
        if n - k - 1 < 0:
            return 0

        ans = m * nCr(n - 1, k) % MOD
        ans = ans * pow(m - 1, n - k - 1, MOD) % MOD

        return ans
