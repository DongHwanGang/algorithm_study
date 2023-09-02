def main() -> int:
    checkArray(int(input()))
    return 0

def checkArray(T: int) -> None:
    arr: list = []
    N: int = 0
    
    arr = generateArray(arr)

    for test_case in range(T):
        N = int(input())
        print(arr[N-1])

def generateArray(arr: list) -> list:
    for i in range(101):
        if i < 3:
            arr.append(1)
        else:
            arr.append(arr[i-3] + arr[i-2])
    return arr

if __name__ == "__main__":
    main()