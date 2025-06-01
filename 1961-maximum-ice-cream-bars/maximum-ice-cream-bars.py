class Solution:
    def maxIceCream(self, costs: List[int], coins: int) -> int:
        if coins >= sum(costs):
            return len(costs)
        if min(costs) > coins:
            return 0

        costs_sorted = sorted(costs)
        count = 0
        for cost in costs_sorted:
            if coins >= cost:
                coins -= cost
                count += 1
            else:
                return count 
        