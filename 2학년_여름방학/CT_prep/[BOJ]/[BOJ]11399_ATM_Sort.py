def main() -> int:
    N: int = int(input())
    ATM(N)
    return 0

def ATM(N: int) -> None:
    Necessary_time: list = list(map(int, input().split()))
    person_time: int = 0
    answer: int = 0

    Necessary_time.sort()

    for i in range(N):
        person_time = person_time + Necessary_time[i]
        answer = answer + person_time

    print(answer)

if __name__=="__main__":
    main()