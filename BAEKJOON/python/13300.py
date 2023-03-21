import sys
input = sys.stdin.readline

n, k = map(int, input().split())
student = [[0]*6, [0]*6]
for i in range(n):
    s, y = map(int, input().split())
    if s == 0:
        student[0][y - 1] += 1
    else:
        student[1][y - 1] += 1

cnt = 0
for i in student:
    for j in i:
        cnt = j // k + cnt
        if j % k != 0:
            cnt += 1
print(cnt)