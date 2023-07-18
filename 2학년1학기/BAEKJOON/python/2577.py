import sys
input = sys.stdin.readline

mlt = 1

for i in range(3):
    num = int(input())
    mlt *= num

mlt = str(mlt)
for i in range(10):
    print(mlt.count(str(i)))