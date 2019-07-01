n, m = map(int, input().split())
matrix = [[0]*m for i in range(n)]
cnt = 0

for i in range(0, n):
    index = n - i - 1
    if i % 2:
        for j in range(m-1, -1, -1):
            cnt += 1
            matrix[index][j] = cnt
    else:
        for j in range(0, m):
            cnt += 1
            matrix[index][j] = cnt

for i in range(0, n):
    for j in range(0, m):
        print(matrix[i][j], end=' ')
    print()
