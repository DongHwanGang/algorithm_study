def main() -> None:
    n: int
    m: int
    drawing: list
    visited: list

    n, m = list(map(int, input().split()))
    drawing, visited = draw(n, m)
    measure_area(drawing, visited, n, m)

def draw(rows: int, cols: int) -> tuple:
    drawing: list = []
    visited: list = []
    for row in range(rows):
        visited.append([False]*cols)
        temp = list(map(int, input().split()))
        drawing.append(temp)
    
    return drawing, visited

def measure_area(drawing: list, visited: list, rows: int, cols: int) -> None:
    queue: list = []
    num: int = 0
    max_size: int = 0
    temp_size: int = 0
    row: int = 0
    col: int = 0

    for i in range(rows):
        for j in range(cols):
            if visited[i][j] == False:
                visited[i][j] = True
                if drawing[i][j] == 1:
                    temp_size = 0
                    queue.append((i, j))
                    while queue:
                        temp_size += 1
                        row, col = queue.pop(0)
                        if row - 1 >= 0 and visited[row-1][col] == False:
                            visited[row - 1][col] = True
                            if  draw[row - 1][col] == 1:
                                queue.append((row-1, col))
                        if row + 1 < rows and visited[row+1][col] == False:
                            visited[row + 1][col] = True
                            if  draw[row + 1][col] == 1:
                                queue.append((row+1, col))
                        if cols - 1 >= 0 and visited[row][col-1] == False:
                            visited[row][col-1] = True
                            if  draw[row][col-1] == 1:
                                queue.append((row, col-1))
                        if cols + 1 < cols and visited[row][col+1] == False:
                            visited[row][col+1] = True
                            if  draw[row][col+1] == 1:
                                queue.append((row, col+1))
                    num += 1
                    max_size = max_size if max_size > temp_size else temp_size

    print(num)
    print(max_size)

if __name__ == "__main__":
    main()