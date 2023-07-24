def main()->None:
    painting(int(input()))

def painting(T: int)->None:
    board: list = None
    test_case: int = None
    upper_row: int = None
    low_row: int = None
    upper_col: int = None
    low_col: int = None
    color: int = None
    input_area: int = None
    row: int = None
    col: int = None
    cnt: int = None
    repeat: int = None

    for test_case in range(T):
        board = [[0]*30 for i in range(30)]
        input_area = int(input())
        cnt = 0
        for repeat in range(input_area):
            upper_row, upper_col, low_row, low_col, color = list(map(int, input().split()))
            for row in range(upper_row, low_row + 1):
                for col in range(upper_col, low_col + 1):
                    if board[row][col] == 0:
                        board[row][col] = color
                    else:
                        board[row][col] = 3

        for row in range(30):
            for col in range(30):
                if board[row][col] == 3:
                    cnt += 1
        print("#%d %d" %(test_case+1, cnt))

if __name__ == "__main__":
    main()