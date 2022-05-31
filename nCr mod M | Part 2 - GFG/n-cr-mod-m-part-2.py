#User function Template for python3
import math
class Solution:
	def inverse(self, n, m):
       return pow(n, m - 2, m)
    def factorize(self, n):
       res = []
       for i in range(2, math.floor(math.sqrt(n)) + 1):
           if n % i == 0:
               res.append(i)
               n //= i
       if n != 1:
           res.append(n)
       return res
    def ncr_small(self, n, r, m):
       num, den = 1, 1
       while r:
           num = (num * n) % m
           den = (den * r) % m
           r -= 1
           n -= 1
       return (num * self.inverse(den, m)) % m
       
    def ncr_lucas(self, n, r, m):
       if n == 0 or r == 0:
           return 1
       ni, ri = n%m, r%m
       if ri > ni:
           return 0
       return self.ncr_small(ni, ri, m) * self.ncr_lucas(n//m, r//m, m)
   
    def crt(self, A, N):
       n = 1
       for ni in N:
           n *= ni
       res = 0
       for ai, ni in zip(A, N):
           res = (res + ai * (n//ni) * self.inverse((n//ni), ni)) % n
       return res
           
           
    def nCrModM(self, n, r, m):
        factors = self.factorize(m)
        ncr = [self.ncr_lucas(n, r, factor) for factor in factors]
        return self.crt(ncr, factors)

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n, r, m = input().split()
		n = int(n)
		r = int(r)
		m = int(m)
		obj = Solution()
		ans = obj.nCrModM(n, r, m)
		print(ans)


# } Driver Code Ends