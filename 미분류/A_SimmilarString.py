import sys
input = sys.stdin.readline

N = int(input())
S = input().rstrip()
T = input().rstrip()
check = True
for i in range(N):
    if S[i] == T[i]:
        continue
    elif S[i] != T[i]:
        if S[i] == '0' and (T[i] == '0' or T[i] == 'o'):
            continue
        elif S[i] == '1' and (T[i] == '1' or T[i] == 'l'):
            continue
        elif T[i] == '0' and (S[i] == '0' or S[i] == 'o'):
            continue
        elif T[i] == '1' and (S[i] == '1' or S[i] == 'l'):
            continue
        else:
            check = False
            break
if check:
    print("Yes")
else:
    print("No")