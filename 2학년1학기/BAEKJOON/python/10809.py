import sys
s = sys.stdin.readline().rstrip()
alphabet = [-1]*26
for i in s:
    alphabet[ord(i) - ord('a')] = s.find(i)

for i in alphabet:
    print(i, end = ' ')