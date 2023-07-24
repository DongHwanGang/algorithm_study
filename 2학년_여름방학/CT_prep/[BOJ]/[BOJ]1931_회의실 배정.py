import sys
input = sys.stdin.readline

def main()->None:
    meet_scheduling(int(input()))

def meet_scheduling(num: int)->None:
    reservation_time: dict = {}
    start: int = 0
    end: int = 0
    i: int = 0
    row: int = 0
    col: int = 0
    temp_row: int = 0
    temp_col: int = 0
    answer: int = 1

    for i in range(num):
        start, end = map(int, input().rstrip().split()) 
        try:
            if reservation_time[start] > end:
                reservation_time[start] = end
        except:
            reservation_time[start] = end
    reservation_time = sorted(reservation_time.items())
    print(reservation_time)
    row, col = reservation_time[-1]
    for i in reservation_time[-2::-1]:
        temp_row, temp_col = i
        if temp_col < row:
            answer += 1
            row, col = temp_row, temp_col
    print(answer)

if __name__ == "__main__":
    main()