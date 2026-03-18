class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        result = []

        t, b = 0, len(matrix)-1
        l, r = 0, len(matrix[0])-1

        while t <= b and l <= r :
            for c in range(l, r+1):
                result.append(matrix[t][c])
            t += 1

            for j in range(t, b+1):
                result.append(matrix[j][r])
            r -= 1

            if t <= b :
                for c in range(r, l - 1, -1):
                    result.append(matrix[b][c])
                b -= 1
            if l <= r:
                for i in range(b, t - 1, -1):
                    result.append(matrix[i][l])
                l += 1

        return result