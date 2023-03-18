import sys
input = sys.stdin.readline

n = int(input())
sum_num = []
for i in range(n):
    a, b = map(int, input().split())
    sum_num.append(a + b)

for i in range(n):
    print('Case #%d: %d' %(i + 1, sum_num[i]))