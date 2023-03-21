import sys
input = sys.stdin.readline

alpha1 = [0]*26
alpha2 = [0]*26

input_str_1 = input().rstrip()
input_str_2 = input().rstrip()

for i in input_str_1:
    alpha1[ord(i) - ord('a')] += 1

for i in input_str_2:
    alpha2[ord(i) - ord('a')] += 1
cnt = 0
for i in range(26):
    if alpha1[i] != alpha2[i]:
        if alpha1[i] > alpha2[i]:
            cnt = cnt + (alpha1[i] - alpha2[i])
        else:
            cnt = cnt + (alpha2[i] - alpha1[i])

print(cnt)