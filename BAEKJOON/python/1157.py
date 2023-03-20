import sys
s = sys.stdin.readline().rstrip()
s = list(s.upper()).sort()
arr = [0]*26

for i in s:
    arr.append(s.count(i))
    s = s[]
