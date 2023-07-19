import heapq
import sys
input = sys.stdin.readline

def main() -> None:
    N: int = int(input().rstrip())
    min_heap(N)

def min_heap(num: int) -> None:
    length: int = 0
    heap: list = []
    in_num: int = 0

    for i in range(num):
        in_num = int(input().rstrip())
        if in_num == 0 and length == 0:
            print(0)
        elif in_num == 0 and length != 0:
            print(f"{heapq.heappop(heap)}")
            length = length - 1
        else:
            heapq.heappush(heap, in_num)
            length = length + 1

if __name__ == "__main__":
    main()