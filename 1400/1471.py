n = int(input())
matrix = [[0]*n for i in range(n)]
cnt = 0

for i in range(0, n):
    if i % 2:
        for j in range(0, n):
            cnt += 1
            matrix[i][j] = cnt
    else:
        for j in range(n-1, -1, -1):
            cnt += 1
            matrix[i][j] = cnt

for i in range(0, n):
    for j in range(0, n):
        print(matrix[j][i], end=' ')
    print()
