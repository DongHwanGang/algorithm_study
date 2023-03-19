import sys
input = sys.stdin.readline

N = int(input())
num = input().rstrip()

sum_num = 0
for i in num:
    sum_num += int(i)
    
print(sum_num)