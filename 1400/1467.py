n, m = map(int, input().split())

for i in range(n-1, -1, -1):
    for j in range(0, n*m, n):
        print(n*m-i-j, end=' ')
    print()
