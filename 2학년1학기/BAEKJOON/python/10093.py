a, b = map(int, input().split())

if a > b:
    b, a = a, b

if a == b:
    print(b - a)
else:
    print(b - a - 1)

for i in range(a + 1, b):
    print(i, end = " ")