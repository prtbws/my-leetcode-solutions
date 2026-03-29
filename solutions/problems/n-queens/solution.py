class Solution:
    def isSafe(self, row, col, queens):

        for r in range(row):

            if queens[r] == col:
                return False
            
            if abs(r-row) == abs(queens[r]-col):
                return False

        return True

    def solve(self, row, n, queens, solutions):

        if row == n:
            solutions.append(queens[:])
            return

        for col in range(n):

           if self.isSafe(row, col, queens):
            queens[row] = col
            self.solve(row+1, n, queens, solutions)

    def solveNQueens(self, n: int) -> List[List[str]]:

        queens = [-1]*n
        solutions = []
        self.solve(0, n, queens, solutions)
        
        ans = []
        for sol in solutions :
            board = []
            for i in sol:
                row = "." * i + "Q" + "." * (n - i - 1)
                board.append(row)
            ans.append(board)

        return ans
        