class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min_price = float('inf')
        total_profit = 0
        prev_price = 0

        for price in prices:
            if price < min_price:
                min_price = price

            elif price > prev_price:
                total_profit += price - prev_price
            
            prev_price = price
        
        return total_profit