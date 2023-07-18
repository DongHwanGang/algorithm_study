import sys
input = sys.stdin.readline

N, M = list(map(int, input().split()))
sushiN = list(map(str, input().split()))
sushiM = list(map(str, input().split()))
payM = list(map(int, input().split()))

answer = 0
cnt = 0
for _ in range(M):
    for i in sushiN:
        if sushiM[_] == i:
            answer += payM[_ + 1]
            cnt += 1
            break

if N - cnt > 0:
    answer = answer + (N - cnt) * payM[0]

print(answer)
