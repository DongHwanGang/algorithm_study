from collections import deque

def main() -> None:
    N, M = map(int, input().split())
    mapping(N, M)

def mapping(N: int, M: int) -> None:
    local: list = [list(map(int, input())) for i in range(N)]
    visited: list = [[[0]*M for i in range(N)] for i in range(2)]
    dy: tuple = (-1, 1, 0, 0)
    dz: tuple = (0, 0, -1, 1)
    queue: deque = deque()
    
    visited[0][0][0] = 1
    queue.append((0, 0, 0))

    while queue:
        x, y, z = queue.popleft()
        for i in range(4):
            ny = y + dy[i]
            nz = z + dz[i]
            if ny < 0 or ny >= N or nz < 0 or nz >= M:
                continue
            nx = local[x][ny][nz]
            
if __name__ == "__main__":
    main()