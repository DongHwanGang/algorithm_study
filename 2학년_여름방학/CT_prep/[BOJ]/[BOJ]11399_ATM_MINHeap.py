import heapq

def main() -> int:
    N: int = int(input())
    ATM(N)
    return 0

def ATM(N: int) -> None:
    Necessary_time: list = list(map(int, input().split()))
    heap: list = []
    person_time: int = 0
    answer: int = 0

    for i in range(N):
        heapq.heappush(heap, Necessary_time[i])

    for i in range(N):
        person_time = person_time + heapq.heappop(heap)
        answer = answer + person_time

    print(answer)

if __name__=="__main__":
    main()