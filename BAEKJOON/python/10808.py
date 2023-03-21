import sys
input = sys.stdin.readline

string = [0]*26
in_str = input().rstrip()

for i in in_str:
    idx = int(ord(i) - ord('a'))
    string[idx] = string[idx] + 1

for i in string:
    print(i, end = ' ')