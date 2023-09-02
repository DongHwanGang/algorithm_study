from collections import deque
import sys
read = sys.stdin.readline

M, N = map(int, read().split())  # M과 N의 순서를 맞춤
box = [list(map(int, read().split())) for _ in range(N)]

# 왼쪽, 오른쪽, 앞, 뒤 방향
x = [1, -1, 0, 0]
y = [0, 0, 1, -1]

cnt = 0
queue = deque()

# 익은 토마토의 좌표 큐에 추가
for i in range(N):
    for j in range(M):
        if box[i][j] == 1:
            queue.append((i, j, 0))

while queue:
    i, j, cnt = queue.popleft()

    for dx, dy in zip(x, y):
        ni, nj = i + dy, j + dx

        if 0 <= ni < N and 0 <= nj < M and box[ni][nj] == 0:
            box[ni][nj] = 1
            queue.append((ni, nj, cnt + 1))

for i in range(N):
    print(box[i])

if all(all(box[n][m] != 0 for m in range(N)) for n in range(M)):
    print(cnt)
else:
    print(-1)