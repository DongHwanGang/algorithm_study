from collections import deque

def main() -> None:
    red_green_color_weakness(int(input()))

def red_green_color_weakness(N: int) -> None:
    gird: list = [list(input()) for i in range(N)]
    greneal_viwe = [[False]*N for i in range(N)] # 일반 시야
    weakness_viwe = [[False]*N for i in range(N)] # 색약 시야
    dx: tuple = (-1, 1, 0, 0) 
    dy: tuple = (0, 0, -1, 1)
    G_queue: deque = deque() # 일반 시야의 범위 탐색 큐
    W_queue: deque = deque() # 색약 시야의 범위 탐색 큐
    color: str = ""
    G_color: int = 0 # 일반 시야가 볼 수 있는 범위 개수
    W_color: int = 0 # 색약 시야가 볼 수 있는 범위 개수 

    # 일반 시야가 볼 수 있는 범위 bfs
    for row in range(N):
        for col in range(N):
            # 이미 탐색한 부분인지 확인, 최초 탐색이면
            if not greneal_viwe[row][col]:
                # color 변수에 gird의 색을 넣음
                color = gird[row][col]
                greneal_viwe[row][col] = True
                G_queue.append((row, col))
                while G_queue:
                    x, y = G_queue.popleft()
                    for i in range(4):
                        nx = x + dx[i]
                        ny = y + dy[i]
                        # grid의 범위 확인 조건문
                        if nx < 0 or nx >= N or ny < 0 or ny >= N:
                            continue
                        # 탐색 부분의 색상이 같거나 최초 탐색이 아닌 경우
                        if gird[nx][ny] != color or greneal_viwe[nx][ny]:
                            continue
                        # 위 조건을 만족하면 
                        greneal_viwe[nx][ny] = True
                        G_queue.append((nx, ny))
                G_color += 1

    # 색약 시야가 볼 수 있는 범위 bfs
    for row in range(N):
        for col in range(N):
            if not weakness_viwe[row][col]:
                color = gird[row][col]
                weakness_viwe[row][col] = True
                W_queue.append((row, col))
                while W_queue:
                    x, y = W_queue.popleft()
                    for i in range(4):
                        nx = x + dx[i]
                        ny = y + dy[i]
                        if nx < 0 or nx >= N or ny < 0 or ny >= N:
                            continue
                        if weakness_viwe[nx][ny]:
                            continue
                        # 빨간색과 초록색을 같은 범주로 봐야함
                        # 빨간색 = 초록색, 빨간색 = 빨간색, 초록색 = 빨간색
                        # 같지 않은 색 중 파란색인 경우만 골라내면 됨.
                        if gird[nx][ny] != color:
                            if color == "B" or gird[nx][ny] == "B":
                                continue
                                
                        weakness_viwe[nx][ny] = True
                        W_queue.append((nx, ny))
                W_color += 1
                
    print(f"{G_color} {W_color}")
if __name__ == "__main__":
    main()