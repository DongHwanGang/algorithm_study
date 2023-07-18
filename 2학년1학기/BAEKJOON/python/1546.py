import sys
input = sys.stdin.readline

n = int(input())

score = list(map(int, input().split()))
maxscore = max(score)

for rescore in range(n):
    score[rescore] /= maxscore

print(sum(score)/n * 100)