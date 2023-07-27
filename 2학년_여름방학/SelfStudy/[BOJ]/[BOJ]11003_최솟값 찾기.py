#데큐, 슬라이딩 윈도우
#엿이나 먹어라 존나 어렵네

from collections import deque

def main() -> None:
    N, L = map(int, input().split())
    min_search(N, L)

def min_search(N: int, L: int) -> None:
    A = tuple(map(int, input().split()))
    numbers = deque()
    
    for i in range(len(A)):
        while numbers:
            if numbers[-1][0] > A[i]:
                numbers.pop()
            else:
                break
        numbers.append((A[i], i))

        if numbers[0][1] < i - L + 1:
            numbers.popleft()

        print(numbers[0][0], end=" ")

if __name__ == "__main__":
    main()