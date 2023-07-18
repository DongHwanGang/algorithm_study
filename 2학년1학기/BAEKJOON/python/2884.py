a, b = map(int, input().split())

if a == 0:
    a = 24

time = ((a * 60 + b) - 45)
a =  time// 60 % 24
b =  time % 60
print(a, b)
