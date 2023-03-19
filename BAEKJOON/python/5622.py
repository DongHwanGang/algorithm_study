import sys

dial = ['','', 1, 'ABC', 'DEF', 'GHI', 'JKL', 'MNO', 'PQRS', 'TUV', 'WXYZ']
num = 0

for i in sys.stdin.readline().rstrip():
    for j in dial[3:]:
        if j.find(i) != -1:
            num += dial.index(j)
            break

print(num)