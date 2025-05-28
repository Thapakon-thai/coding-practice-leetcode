class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        total_profit = 0
        prev_price = float('inf')

        for price in prices:
            if price > prev_price:
                total_profit += price - prev_price
            prev_price = price
        
        return total_profit