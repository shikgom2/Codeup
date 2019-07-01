n = int(input())
widest = 0
bend = 0

for i in range(1, int(n/2)):
    if widest < i * (n - i*2):
        widest = i * (n - i*2)
        bend = i

print(bend)
