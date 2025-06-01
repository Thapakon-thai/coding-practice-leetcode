class Solution:
    def minAbsDiff(self, grid: List[List[int]], k: int) -> List[List[int]]:
        m, n = len(grid), len(grid[0])
        result = []

        # find submatrix
        for i in range(m-k+1):
            temp = []
            for j in range(n-k+1):

                #find distinct values in submatrix
                values = []
                for x in range(i, i+k):
                    for y in range(j, j+k):
                        values += [grid[x][y]]
                distinct = sorted(set(values))

                if len(distinct) < 2:
                    temp.append(0)
                else:
                    min_abs = min(abs(distinct[i] - distinct[i+1]) for i in range(len(distinct) - 1))
                    temp.append(min_abs)
            result.append(temp)
        return result