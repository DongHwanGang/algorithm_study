from collections import deque

def main() -> None:
    while True:
        L, R, C = map(int, input().split())
        if not L and not R and not C:
            break
        escape_building(L, R, C)

def escape_building(L: int, R: int, C: int) -> None:
    building: list = []
    s_save: list = []
    e_save: list = []
    queue: deque = deque()
    dx: tuple = (-1, 1, 0, 0, 0, 0)
    dy: tuple = (0, 0, -1, 1, 0, 0)
    dz: tuple = (0, 0, 0, 0, -1, 1)

    for level in range(L):
        building.append([])
        for row in range(R):
            temp = list(input())
            building[level].append(temp)
        for row in range(R):
            for col in range(C):
                if building[level][row][col] == 'S':
                    s_save = [level, row, col]
                elif building[level][row][col] == 'E':
                    e_save = [level, row, col]
        skip = input()
    
    building[s_save[0]][s_save[1]][s_save[2]] = 0
    queue.append(tuple(s_save))

    while building[e_save[0]][e_save[1]][e_save[2]] == 'E' and queue:
        x, y, z = queue.popleft()
        for i in range(6):
            nx = x + dx[i]
            ny = y + dy[i]
            nz = z + dz[i]
            if nx < 0 or nx >= L or ny < 0 or ny >= R or nz < 0 or nz >= C:
                continue
            if building[nx][ny][nz] == '#' or building[nx][ny][nz] != 'E' and building[nx][ny][nz] != '.':
                continue
            building[nx][ny][nz] = building[x][y][z] + 1
            queue.append((nx, ny, nz))
    
    if building[e_save[0]][e_save[1]][e_save[2]] == 'E':
        print("Trapped!")
    else:
        print(f"Escaped in {building[e_save[0]][e_save[1]][e_save[2]]} minute(s).")

if __name__ == "__main__":
    main()