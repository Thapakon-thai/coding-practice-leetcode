class Solution:
    def minCuttingCost(self, n: int, m: int, k: int) -> int:
        total_cost = 0
        if m > k:
            total_cost += (m - k) * k
        if n > k:
            total_cost += (n - k) * k
        
        return total_cost 
                