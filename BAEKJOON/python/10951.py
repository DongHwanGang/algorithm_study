import sys

input = sys.stdin.readline
sum_num = []

while True:
    try:
        a, b = map(int, input().split())
        sum_num.append(a + b)
    except:
        break

for i in sum_num:
    print(i)