class Solution:
    def champagneTower(self, poured: int, query_row: int, query_glass: int) -> float:
        tower = [[0] * 102 for _ in range(102)]
        tower[0][0] = poured

        for i in range(query_row + 1):
            for j in range(i + 1):
                if tower[i][j] > 1:
                    excess = (tower[i][j] - 1.0) / 2.0
                    tower[i][j] = 1
                    tower[i + 1][j] += excess
                    tower[i + 1][j + 1] += excess

        return tower[query_row][query_glass]