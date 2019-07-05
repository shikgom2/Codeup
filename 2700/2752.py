dic = {}
s = ""
q = 0
temp = input()
c, n = temp.split()

c = int(c)
n = int(n)
for i in range(0, c):
    num, char = input().split()
    num = int(num)
    if(num == 1):
        s = char
    dic[char] = num

for i in range(0, n):
    char, num = input().split()
    num = int(num)
    q = q + num*dic[char]

print(s, q)

