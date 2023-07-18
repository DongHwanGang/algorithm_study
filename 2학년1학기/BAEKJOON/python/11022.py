import sys
input = sys.stdin.readline

n = int(input())
sum_num = []

for i in range(n):
    a = list(map(int, input().split()))
    sum_num.append(a)

for i in range(n):
    print('Case #%d: %d + %d = %d' %(i + 1, sum_num[i][0], sum_num[i][1], sum(sum_num[i])))
