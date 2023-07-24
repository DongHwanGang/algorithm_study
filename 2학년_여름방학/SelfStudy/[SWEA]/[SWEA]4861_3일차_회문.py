def main()->None:
    palindrome(int(input()))

def palindrome(T: int)->None:
    test_case: int = 0
    M: int = 0
    N: int = 0
    board: list = []
    i: int = 0
    j: int = 0
    start: int = 0
    end: int = 0
    tmp_start: int = 0
    tmp_end: int = 0
    cnt: int = 0
    row_flag: bool = True
    col_flag: bool = True

    for test_case in range(T):
        N, M = map(int, input().split())
        board = [input() for i in range(N)]

        for i in range(N):
            tmp_start = start = 0
            tmp_end = end = N - 1
            while end < N:
                cnt = 0
                row_flag = True
                col_flag = True
                while tmp_start < tmp_end:
                    if board[i][tmp_start] != board[i][tmp_end]:
                        row_flag = False
                    
                    if board[tmp_start][i] != board[tmp_end][i]:
                        col_flag = False 
        
                    if not row_flag and not col_flag:
                        break
                    else:
                        cnt += 1
                        tmp_start += 1
                        tmp_end -= 1

                if row_flag and cnt == (M // 2):
                    print("#%d %s" %(test_case + 1, board[i]))
                if col_flag and cnt == (M // 2):
                    print("#%d" %(test_case + 1), end=" ")
                    for j in range(start, end + 1):
                        print("%s" %board[i][j], end="")
                    print()
                start += 1
                end += 1

if __name__ == "__main__":
    main()