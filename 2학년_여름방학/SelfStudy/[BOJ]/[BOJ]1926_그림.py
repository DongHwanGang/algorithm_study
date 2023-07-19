def main() -> None:
    n: int
    m: int
    drawing: list
    visited: list

    n, m = list(map(int, input().split()))
    drawing, visited = draw(n, m)
    measure_area(drawing, visited)

def draw(rows: int, cols: int) -> tuple:
    drawing: list = []
    visited: list = []
    for row in range(rows):
        visited.append([False]*cols)
        temp = list(map(int, input().split()))
        drawing[row].append(temp)
    
    return drawing, visited

def measure_area(drawing: list, visited: list) -> None:
    queue: list = []
    num: int = 0
    max_size: int = 0


