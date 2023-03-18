import sys
input = sys.stdin.readline
namelist = [0]*30
for call in range(28):
    namelist[int(input())-1] = 1

num = namelist.index(0)
print(num + 1)
namelist[num] = 1
print(namelist.index(0) + 1)