from collections import deque

def main() -> None:
    M, N, H = map(int, input().split())
    tomato(M, N, H)

def tomato(M: int, N: int, H: int) -> None:
    tomato_box: list = [[list(map(int, input().split())) for _ in range(N)] for j in range(H)]
    visited: list = [[[-1]*M for _ in range(N)] for j in range(H)]
    dx: tuple = (-1, 1, 0, 0, 0, 0)
    dy: tuple = (0, 0, -1, 1, 0, 0)
    dz: tuple = (0, 0, 0, 0, -1, 1)
    queue: deque = deque()
    level: int = 0
    cnt: int = 0
    negative_number: int = 0

    for depth in range(H):
        for row in range(N):
            for col in range(M):
                if tomato_box[depth][row][col] == 1:
                    visited[depth][row][col] = 0
                    queue.append((depth, row, col))
                elif tomato_box[depth][row][col] == -1:
                    negative_number += 1
                    
    while queue:
        x, y, z = queue.popleft()
        cnt += 1
        for i in range(6):
            nx = x + dx[i]
            ny = y + dy[i]
            nz = z + dz[i]
            if nx < 0 or nx >= H or ny < 0 or ny >= N or nz < 0 or nz >= M:
                continue
            if visited[nx][ny][nz] != -1 or tomato_box[nx][ny][nz]:
                continue
            level = visited[nx][ny][nz] = visited[x][y][z] + 1
            queue.append((nx, ny, nz))

    if cnt + negative_number == N*M*H:
        print(level)
    else:
        print(-1)

if __name__ == "__main__":
    main()