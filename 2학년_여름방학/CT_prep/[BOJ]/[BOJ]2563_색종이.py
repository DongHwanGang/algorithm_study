#2563 색종이
def main() -> int:
    papers: int = int(input())
    row: int = 0
    col: int = 0
    drawing_paper: list = [[0]*100 for i in range(100)]

    for paper in range(papers):
        row, col = map(int, input().split())
        drawing_paper = drawing(row, col, drawing_paper)

    drawing_arae(drawing_paper)
    return 0

def drawing(row: int, col: int, drawing_paper: list) -> list:
    for i in range(row, row + 10):
        if i < 100:
            for j in range(col, col + 10):
                if j < 100:
                    drawing_paper[i][j] = 1
                else:
                    break
        else:
            break
    return drawing_paper

def drawing_arae(drawing_paper: list) -> None:
    draw_area: int = 0

    for i in range(100):
        for j in range(100):
            if drawing_paper[i][j]:
                draw_area += 1
    
    print(draw_area)
if __name__=="__main__":
    main()