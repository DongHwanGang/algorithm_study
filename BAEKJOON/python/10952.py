import sys

sum_num = []

while True:
    a, b = map(int, sys.stdin.readline().split())
    if a == 0 and b == 0:
        break
    sum_num.append(a + b)

for i in sum_num:
    print(i)