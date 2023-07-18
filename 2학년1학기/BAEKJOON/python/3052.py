import sys
input = sys.stdin.readline

rest = []
number = None

for get in range(10):
    number = int(input())
    if rest.count(number%42) == 0:
        rest.append(number%42)

print(len(rest))