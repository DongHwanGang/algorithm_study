import sys
input = sys.stdin.readline

def main():
    N, M = list(map(int, input().split()))
    print_answer(NotSeen(M, NotHeard(N)))

def NotHeard(N: int) -> dict:
    name = {}
    for i in range(N):
        input_name = input().rstrip()
        name[input_name] = input_name
    return name

def NotSeen(M: int, NotHeard: dict) -> list:
    arr = []
    size = 0
    for j in range(M):
        name = input().rstrip()
        try:
            arr.append(NotHeard[name])
            size += 1
        except:
            continue
    print(size)
    return arr

def print_answer(arr: list) -> None:
    arr.sort()
    for name in arr:
        print(name)

if __name__=="__main__":
    main()