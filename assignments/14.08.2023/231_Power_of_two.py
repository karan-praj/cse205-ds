class Solution(object):
    def isPowerOfTwo(self, n):
        # Base case: If n is 0, it's not a power of two
        if n == 0:
            return False
        # Base case: If n is 1, it's a power of two
        elif n == 1:
            return True
        # If n is even and greater than 1, recursively check n / 2
        elif n > 1 and n % 2 == 0:
            return self.isPowerOfTwo(n // 2)
        else:
            return False