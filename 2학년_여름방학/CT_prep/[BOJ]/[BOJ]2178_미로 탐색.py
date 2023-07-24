import sys
input = sys.stdin.readline

def main()->None:
    N, M = list(map(int, input().rstrip().split()))
    search_maze(N, M)

def search_maze(N: int, M: int)->None:
    visited: list = [[0]*M for i in range(N)]
    dx: list = [1, 0, -1, 0]
    dy: list = [0, 1, 0, -1]
    nx: int = 0
    ny: int = 0
    pair: list = []
    queue: list = []
    maze: list = [list(map(int, input().rstrip()))for i in range(N)]

    #BFS
    visited[0][0] = 1
    queue.append([0, 0])
    while queue:
        pair = queue.pop(0)
        for i in range(4):
            nx = pair[0] + dx[i]
            ny = pair[1] + dy[i]
            if nx < 0 or nx >= N or ny < 0 or ny >= M:
                continue
            if visited[nx][ny] or maze[nx][ny] != 1:
                continue
            visited[nx][ny] = visited[pair[0]][pair[1]] + 1
            queue.append([nx, ny])

    print(visited[N - 1][M - 1])

if __name__ == "__main__":
    main()