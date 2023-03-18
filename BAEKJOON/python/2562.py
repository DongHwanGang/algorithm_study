import sys

input = sys.stdin.readline
temp = max = index = 0

for i in range(9):
    temp = int(input())
    if i == 0:
        max = temp
    else:
        if temp > max:
            max = temp
            index = i
        
print('%d\n%d' %(max, index + 1))
