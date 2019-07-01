n, m = map(int, input().split())
matrix = [[0]*m for i in range(n)]
cnt = 0

for i in range(0, n+m-1):
    for j in range(0, m):
        for k in range(0, n):
            if j+k == i:
                cnt += 1
                matrix[k][j] = cnt

for i in range(0, n):
    for j in range(0, m):
        print(matrix[i][j], end=' ')
    print()
